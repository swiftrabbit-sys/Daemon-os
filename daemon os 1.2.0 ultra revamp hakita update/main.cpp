#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include "main_core_utils.h"
#include "required_core.h"
#include "terry.h"



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

if(os_input == "play-ultrakill"){ system("games/ULTRAKILL/./run.sh"); }
if(os_input == "install-ultrakill") {system("chmod a+x games/ULTRAKILL/run.sh");}
if(os_input == "map"){
	system("telnet mapscii.me");
}
if(os_input == "image"){
	system("python3 imageloader.py");

}
if(os_input == "minesweeper"){
	system("python3 minesweeper.py");
}
if(os_input == "play-awaria"){ system("python games/Awaria_for_Linux/awaria.py"); }

if(os_input == "maze"){

 system("python3 maze.py");
}
if(os_input == "game1"){
   system("python thecrusadersquest1.2.py");
}
if(os_input == "play-awaria"){system("python games/Awaria_for_Linux/awaria_launcher.py");}
if(os_input == "exit"){ abort(); }
if(os_input == "clear"){ system("clear"); }
// if(os_input == "calculator"){ system("./cal"); } // not continued
// use the other one `pyCal` abb. cal
 
if(os_input == "update"){ system("./update.sh"); }
if(os_input == "ls"){ system("./get_all.sh"); }
if(os_input == "cpu"){ system("clear && lscpu"); }
if(os_input == "minfetch"){

	system("clear && lolcat logo && neofetch");

}

if(os_input == "kamazon"){
system("python3 kamazon.py");

}
// applications - others
if(os_input == "lua_cons"){
 system("lua luaTerm.lua");
}
if(os_input == "bible"){
	
}
if(os_input == "dev_cons"){

	system("python3 developer_console.py"); // very unstable do not use
}

}

}
