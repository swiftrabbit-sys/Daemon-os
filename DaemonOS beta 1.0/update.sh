#!/bin/bash
date >> log.log
echo "update has been run" >> log.log


g++ main.cpp -o main
g++ bootloader.cpp -o boot
g++ calculator.cpp -o cal
