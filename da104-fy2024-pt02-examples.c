#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "mystd.h"

int da104_fy2024_pt02_example_01()
{
    int menuId = 5;
    //bool menuIdError = 0;

    clearScreen(); // clear the screen

    // Display the example problem
    printf("----------     DA104 FY2024 PT-02 Example 01     ----------");
    printf("\n\n");
    printf("\tWhat will be the output of the following program?\n\n");
    printf("\t\t#include <stdio.h>\n");
    printf("\t\tvoid main() {\n");
    printf("\t\t\tint x = 7, y = 10;\n");
    printf("\t\t\twhile (y > x) {\n");
    printf("\t\t\t\tif (y %% 2 == 0)\n");
    printf("\t\t\t\t\tprintf(\"%%d \", y);\n");
    printf("\t\t\t\ty--;\n");
    printf("\t\t\t}\n");
    printf("\t\t}\n");
    printf("\n\n");

    // Display the answer options
    printf("\t1. 10 8 6\n");
    printf("\t2. 7 8 10\n");
    printf("\t3. 10 8\n");
    printf("\t4. 8 6 4\n");
    printf("\t---------------------------------------\n");
    printf("\t5. Show the solution\n");

    printf("\n\n");
    
    printf("Enter a menu number selection [def: 5]: ");
    menuId = getUserMenuChoice(5);
    
    // Process the menu selection
    switch (menuId)
    {
        case 1:
        case 2:
        case 4:
        {
            printf("\n\n\t***** Incorrect *****\n\n");
            printf("\tThe output will be: 10 8\n");
            printf("\tThe while loop continues as long as y > x (10 > 7).\n");
            printf("\tInside the loop, it checks if y is even (y %% 2 == 0).\n");
            printf("\tWhen y is 10 and 8, it prints those values.\n");
            printf("\tWhen y becomes 7, the loop condition fails and exits.\n");
            printf("\n\n");
            printf("Press Enter to continue...");
            getchar(); // wait for user to press Enter
            break;
        }
        case 3:
        {
            printf("\n\n\t***** Correct! *****\n\n");
            printf("\tThe output will be: 10 8\n");
            printf("\tThe while loop continues as long as y > x (10 > 7).\n");
            printf("\tInside the loop, it checks if y is even (y %% 2 == 0).\n");
            printf("\tWhen y is 10 and 8, it prints those values.\n");
            printf("\tWhen y becomes 7, the loop condition fails and exits.\n");
            printf("\n\n");
            printf("Press Enter to continue...");
            getchar(); // wait for user to press Enter
            break;
        }
        case 5:
        default:
        {
            break;
        }
    };

    return NO_ERROR;
}

int da104_fy2024_pt02_examples_menu()
{
	int menuId = EXIT_MENU_ID;
	bool menuIdError = 0;
	
	do
	{
		clearScreen(); // clear the screen

		// Display the menu and accept user input
		printf("----------     DA104 - FY2024 - PT-02 Test Examples     ----------");
		printf("\n\n");
		printf("\t1.  Example 01 - Program Output\n");
        /*
		printf("\t2.  PT-01\n");
		printf("\t3.  NPT-02\n");
		printf("\t4.  PT-02\n");
        */
        //printf("\tNo examples currently available.\n");
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
				da104_fy2024_pt02_example_01();
				break;
			}
            /*
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
