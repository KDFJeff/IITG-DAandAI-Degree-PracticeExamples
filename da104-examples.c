#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "mystd.h"
#include "da104-fy2024-examples.h"
#include "da104-fy2025-examples.h"

int da104_examples_menu()
{
	int menuId = EXIT_MENU_ID;
	bool menuIdError = 0;

	do
	{
		clearScreen(); // clear the screen
		
		// Display the menu and accept user input
		printf("----------     DA104 - Proctored Test Examples     ----------");
		printf("\n\n");
		printf("\t1.  FY2024\n");
		printf("\t2.  FY2025\n");
		printf("\t---------------------------------------\n");
		printf("\t99. Exit to previous menu\n");
		printf("\n\n");
		
		if (menuIdError)
		{
			printf("\t***** An invalid menu selection was made *****\n\n");
			menuIdError = false;
		}
		
		printf("Enter a menu number selection [def: 99]: ");
		menuId = getUserMenuChoice(EXIT_MENU_ID);
		
		// Process the menu selection
		switch (menuId)
		{
			case 1:
			{
				da104_fy2024_examples_menu();
				break;
			}
			case 2:
			{
				da104_fy2025_examples_menu();
				break;
			}
			case 99:
			{
				break;
			}
			default:
			{
				menuIdError = true;
				break;
			}
		};
	} while (menuId != EXIT_MENU_ID);

	return NO_ERROR;
}
