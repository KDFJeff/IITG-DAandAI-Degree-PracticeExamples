#include <stdlib.h>
#include <stdio.h>
#include "mystd.h"

int getUserMenuChoice(int defaultMenuId)
{
    int choice;
    char buffer[100]; // Buffer to read entire line
    if (fgets(buffer, sizeof(buffer), stdin) != NULL)
    {
        if (sscanf(buffer, "%d", &choice) == 1)
        {
                return choice;
        }
    }

    return defaultMenuId; // return default menu Id
}

int clearScreen()
{
    #ifdef _WIN32
    system("cls"); // clear the screen
    #else
    system("clear"); // clear the screen for linux systems
    #endif
    
    return NO_ERROR;
}