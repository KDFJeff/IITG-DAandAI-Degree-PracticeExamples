#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "mystd.h"
#include "da101-examples.h"
#include "da102-examples.h"
#include "da103-examples.h"
#include "da104-examples.h"

int main()
{
	int menuId = EXIT_MENU_ID;
	bool menuIdError = 0;

	do
	{
		clearScreen(); // clear the screen
		
		// Display the menu and accept user input
		printf("----------     Data Analysis & AI ODP - Proctored Test Examples     ----------");
		printf("\n\n");
		printf("\t1.  DA101 Course Examples\n");
		printf("\t2.  DA102 Course Examples\n");
		printf("\t3.  DA103 Course Examples\n");
		printf("\t4.  DA104 Course Examples\n");
		printf("\t---------------------------------------\n");
		printf("\t99. Exit the application\n");
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
				//da101_examples_menu();
				break;
			}
			case 2:
			{
				//da102_examples_menu();
				break;
			}
			case 3:
			{
				//da103_examples_menu();
				break;
			}
			case 4:
			{
				da104_examples_menu();
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
