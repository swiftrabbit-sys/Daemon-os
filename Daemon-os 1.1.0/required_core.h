#ifndef REQUIRED_CORE_H
#define REQUIRED_CORE_H

// Required core definitions and includes for DaemonOS
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <stdio.h>
#include <math.h>

#define Update system("./update.sh")

// Core system definitions
#define DAEMON_VERSION "1.0"
#define MAX_INPUT_SIZE 256

// Common utility macros
#define LOG_INFO(msg) printf("[INFO] %s\n", msg)
#define LOG_ERROR(msg) printf("[ERROR] %s\n", msg)

#endif /* REQUIRED_CORE_H */

