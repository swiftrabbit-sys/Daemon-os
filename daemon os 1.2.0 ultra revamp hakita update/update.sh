#!/bin/bash                                                                     
date >> log.log
echo "update has been run" >> log.log

chmod a+x main boot get_all.sh cal

g++ Daemonedit.cpp -o text
g++ main.cpp -o main
g++ bootloader.cpp -o boot
g++ calculator.cpp -o cal
g++ message.cpp -o mess

