#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
  // boot loader
  system("clear");
  system("date >> log.log");
  system("echo 'application ./boot has been run ' >> log.log");
main:
  printf("DAEMON OS ----- bootloader - 1.0\n");
  printf("select bootable c++ file\n");
  
  system("ls -al");
  string file_select;
  cin>>file_select;
  
  if (file_select == "main.cpp"){ system("./main"); }
  else {
    printf("sig not found .check if bootable file?");
    goto main;
  }
  return 0;
}
