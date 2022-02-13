#ifndef LCLOGGER_H
#define LCLOGGER_H

#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

enum TYPES
{
    INT = '%d'
};

const char* ReplaceFormat(const char* fmt)
{
    char* format = malloc(sizeof(char*) * strlen(fmt));
    strcpy(format, fmt);
    
}

// Use a finder function to find all of the instances of the macros for the format and then replace them.
void Log(const char* format, ...)
{
    va_list args;

    char* fmt = format;
    ReplaceFormat(fmt);

    va_start(args, format);

    vfprintf(stdout, format, args);

    va_end(args);
}

#endif