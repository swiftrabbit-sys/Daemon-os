import os
os.system("clear")
os.system("echo 'dev console is running successfully' >> log.log")

print("DAEMON OS - DEVELOPER CONSOLE")

console_run = True

while console_run == True:
    console_input = input("[admin ~]#")
    if console_input == "exit":
        os.system("./main")
    if console_input == "flush.log":
        os.system("echo '' > log.log")
    else:
        os.system(console_input);

