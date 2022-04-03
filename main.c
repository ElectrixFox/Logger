#pragma once
#include <stdio.h>
#include <stdlib.h>

#include <LCLogger.h>

int main(int argc, char const *argv[])
{
    char* words = "I am int years old, I said int years old\n";
    //Log("I am int years old, I said int years old\n", 5);

    ReplaceFormat(words);
    //GetCurrentFile();
    return 0;
}
