#include <termios.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <iostream>

struct termios orig_termios;

void disableRawMode() {
    tcsetattr(STDIN_FILENO, TCSAFLUSH, &orig_termios);
}

void enableRawMode() {
    tcgetattr(STDIN_FILENO, &orig_termios);
    atexit(disableRawMode);

    struct termios raw = orig_termios;
    raw.c_lflag &= ~(ECHO | ICANON | ISIG); // no echo, canonical mode, or Ctrl-C

    tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw);
}

void clearScreen() {
    write(STDOUT_FILENO, "\x1b[2J\x1b[H", 7);
}

void drawRows(const std::vector<std::string>& buffer) {
    for (const auto& line : buffer) {
        write(STDOUT_FILENO, line.c_str(), line.size());
        write(STDOUT_FILENO, "\r\n", 2);
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: daemonedit <filename>\n";
        return 1;
    }

    std::string filename = argv[1];
    std::vector<std::string> buffer = {""};

    enableRawMode();
    clearScreen();

    char c;
    while (read(STDIN_FILENO, &c, 1) == 1) {
        if (c == 27) break; // ESC key to exit
        else if (c == 127 || c == '\b') { // Backspace
            if (!buffer.empty() && !buffer.back().empty()) {
                buffer.back().pop_back();
            }
        }
        else if (c == '\r') {
            buffer.push_back("");
        }
        else {
            buffer.back() += c;
        }

        clearScreen();
        drawRows(buffer);
    }

    disableRawMode();

    // Save on exit
    FILE* fp = fopen(filename.c_str(), "w");
    if (fp) {
        for (const auto& line : buffer) {
            fprintf(fp, "%s\n", line.c_str());
        }
        fclose(fp);
        std::cout << "\nSaved to " << filename << "\n";
    } else {
        std::cerr << "\nFailed to save file.\n";
    }

    return 0;
}
