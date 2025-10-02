#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "mystd.h"

int da104_fy2024_npt02_examples_menu()
{
	int menuId = EXIT_MENU_ID;
	bool menuIdError = 0;
	
	do
	{
		clearScreen(); // clear the screen

		// Display the menu and accept user input
		printf("----------     DA104 - FY2024 - NPT-02 Test Examples     ----------");
		printf("\n\n");
        /*
		printf("\t1.  NPT-01\n");
		printf("\t2.  PT-01\n");
		printf("\t3.  NPT-02\n");
		printf("\t4.  PT-02\n");
        */
        printf("\tNo examples currently available.\n");
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
            /*
			case 1:
			{
				da104_fy2024_npt01_examples_menu();
				break;
			}
			case 2:
			{
				da104_fy2024_pt01_examples_menu();
				break;
			}
			case 3:
			{
				da104_fy2024_npt02_examples_menu();
				break;
			}
			case 4:
			{
				da104_fy2024_pt02_examples_menu();
				break;
			}
            */
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
