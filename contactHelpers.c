//==============================================
// Name:           Full name here
// Student Number: #########
// Email:          userID@myseneca.ca
// Section:        XXX
// Date:           
//==============================================
// Assignment:     2
// Milestone:      2
//==============================================

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "contactHelpers.h"

// Function Definitions

// Clear the standard input buffer
void clearKeyboard(void)
{
    while (getchar() != '\n')   ; // empty execution code block on purpose
}

void pause(void) {

	printf("(Press Enter to continue)");
	clearKeyboard();
}

int getInt(void) {
	int value;		// integer
	char NL = 'x';	// new line
	scanf("%d%c", &value, &NL);

	while (NL != '\n')
	{
		clearKeyboard();
		printf("*** INVALID INTEGER *** <Please enter an integer>: ");
		scanf("%d%c", &value, &NL);
	}
	return value;
}

int getIntInRange(int min, int max) {
	int mid = getInt();
	while ((mid < min) || (mid > max))
	{
		printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", min, max);
		mid = getInt();
	}
	return mid;
}

int yes(void) {
	char yn = 'x';
	char nlc = 'x';
	int res = -1;

	scanf(" %c%c", &yn, &nlc);

	while (!((nlc == '\n') && ((yn == 'Y') || (yn == 'y') || (yn == 'n') || (yn == 'N'))))
	{
		clearKeyboard();
		printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
		scanf(" %c%c", &yn, &nlc);
	}

	if ((yn == 'Y') || (yn == 'y'))
	{
		res = 1;
	}
	else if ((yn == 'N') || (yn == 'n'))
	{
		res = 0;
	}

	return res;
}

int menu(void)
{
	printf("Contact Management System\n");
	printf("-------------------------\n");
	printf("1. Display contacts\n");
	printf("2. Add a contact\n");
	printf("3. Update a contact\n");
	printf("4. Delete a contact\n");
	printf("5. Search contacts by cell phone number\n");
	printf("6. Sort contacts by cell phone number\n");
	printf("0. Exit\n");
	printf("\n");
	printf("Select an option:> ");

	return getIntInRange(0, 6);
	printf("\n");
}

void contactManagerSystem(void)
{
	int mselect;	// menu selection

	do {
		mselect = menu();
		switch (mselect)
		{
		case 0:
			printf("\nExit the program? (Y)es/(N)o: ");
			int quit = yes();
			if (quit == 1) {
				printf("\nContact Management System: terminated\n");
				return;
			}
			else { printf("\n"); }

			break;
		case 1:
			printf("\n<<< Feature 1 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 2:
			printf("\n<<< Feature 2 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 3:
			printf("\n<<< Feature 3 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 4:
			printf("\n<<< Feature 4 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 5:
			printf("\n<<< Feature 5 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 6:
			printf("\n<<< Feature 6 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		default:
			printf("*** OUT OF RANGE *** <Enter a number between 0 and 6> ");
			break;
		}

	} while ((mselect >= 0) || (mselect <= 6));

	return;
}