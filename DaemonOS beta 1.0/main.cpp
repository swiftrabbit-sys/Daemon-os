#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include "main_core_utils.h"
#include "required_core.h"

using namespace std;

int main(){
  system("echo 'main loaded [0xff]' >> log.log ");

  {
	  //startup config
	  system("clear");
	  system("lolcat logo");
  }

printf("list of apps available('ls')\n");
system("ls");

system("echo 'system has successfully loaded CLI [0xff]' >> log.log ");

while(1 == 1){
string os_input;
string dev_input;
int process_code;

cin>>os_input;
if(os_input == "map"){
	system("telnet mapscii.me");
}
if(os_input == "image"){
	system("python3 imageloader.py");

}
if(os_input == "minesweeper"){
	system("python3 minesweeper.py");
}
if(os_input == "maze"){

 system("python3 maze.py");
}
if(os_input == "game-1"){
   system("python thecrusadersquest1.2.py");
}
if(os_input == "exit"){ abort(); }
if(os_input == "clear"){ system("clear"); }
if(os_input == "calculator"){ system("./cal"); }
if(os_input == "update"){ system("./update.sh"); }
if(os_input == "ls"){ system("./get_all.sh"); }
if(os_input == "cpu"){ system("clear && lscpu"); }
if(os_input == "minfetch"){

	system("clear && lolcat logo && neofetch");

}


// applications - others
if(os_input == "dev_cons"){

	system("python3 developer_console.py");
}

}

}
