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
#include "contacts.h"

void getName(struct Name* name)
{
	char yorn;
	// Ask for first name:
	printf("Please enter the contact's first name: ");
	scanf(" %30[^\n]", name->firstName);

	// Ask for middle initial:
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %c", &yorn);
	if (yorn == 'y' || yorn == 'Y')
	{
		printf("Please enter the contact's middle initial(s): ");
		scanf(" %7[^\n]", name->middleInitial);
	}

	// Ask for last name:
	printf("Please enter the contact's last name: ");
	scanf(" %35[^\n]", name->lastName);
}
void getAddress(struct Address* address)
{
	char yorn;
	// Ask for street number:
	//	! Enforce values greater than 0
	do
	{
		printf("Please enter the contact's street number: ");
		scanf(" %d", &address->streetNumber);
	} while (address->streetNumber < 1);

	// Ask for street name:
	printf("Please enter the contact's street name: ");
	scanf(" %40[^\n]", address->street);

	// Ask for apartment number:
	printf("Do you want to enter an apartment number? (y or n): ");
	scanf(" %c", &yorn);
	if (yorn == 'y' || yorn == 'Y')
	{
		do
		{
			printf("Please enter the contact's apartment number: ");
			scanf(" %d", &address->apartmentNumber);
		} while (address->apartmentNumber < 1);
	}

	// Ask for postal code:
	printf("Please enter the contact's postal code: ");
	scanf(" %7[^\n]", address->postalCode);

	// Ask for city:
	printf("Please enter the contact's city: ");
	scanf(" %40[^\n]", address->city);

}
void getNumbers(struct Numbers* numbers)
{
	char yorn;
	// Ask for cell number:
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %c", &yorn);
	if (yorn == 'y' || yorn == 'Y')
	{
		printf("Please enter the contact's cell phone number: ");
		scanf(" %10s", numbers->cell);
	}

	// Ask for home number:
	printf("Do you want to enter a home phone number? (y or n): ");
	scanf(" %c", &yorn);
	if (yorn == 'y' || yorn == 'Y')
	{
		printf("Please enter the contact's home phone number: ");
		scanf(" %10s", numbers->home);
	}

	// Ask for business number:
	printf("Do you want to enter a business phone number? (y or n): ");
	scanf(" %c", &yorn);
	if (yorn == 'y' || yorn == 'Y')
	{
		printf("Please enter the contact's business phone number: ");
		scanf(" %10s", numbers->business);
	}
}

void getContact(struct Contact* contact) {}