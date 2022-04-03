#ifndef LCLOGGER_H
#define LCLOGGER_H

#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

#include "LCString.h"

enum TYPES
{
    INT = '%d'
};

const char* ReplaceFormat(const char* fmt);

// Use a finder function to find all of the instances of the macros for the format and then replace them.
void Log(const char* format, ...);

void GetCurrentFile();

#endif