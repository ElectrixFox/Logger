#include "LCLogger.h"

const char* ReplaceFormat(const char* fmt)
{
    char* format = malloc(sizeof(char*) * 128);
    strcpy(format, fmt);

    char* word = "int";
    //int counts = FindAllOccurrences(word, fmt);

    /* for (int i = 0; i < counts; i++)
    {
        static int index = 0;
        index = Find_n(word, fmt, index);
        index++;

        printf("%d\n", index);
    } */
    
    Replace("int", &format, "d");
    Replace("int", &format, "d");

    
    printf("Format = %s\n", format);
    printf("Origional format = %s\n", fmt);

    return format;
}

void Log(const char* format, ...)
{
    va_list args;

    char* fmt = format;
    ReplaceFormat(fmt);

    va_start(args, format);

    vfprintf(stdout, format, args);

    va_end(args);
}

void GetCurrentFile()
{
    Log("Called %s() in: %s\n", __FUNCTION__, __FILE__);
}
