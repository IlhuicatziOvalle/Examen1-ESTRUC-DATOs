#pragma once
#include <stdlib.h>

#include <stdio.h>
#include <string.h>

typedef struct _strData
{
    char data[4095];
}strData;

char *strLoadFile(const char* filepath, size_t bytes);
void strWriteFile(const char* filepath, char*string, size_t bytes);
char *strFilter(const char* string, int (*filtro)(const char*));
