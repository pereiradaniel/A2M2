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
#include "contactHelpers.h"

void getName(struct Name* name)
{
	int yorn;
	// Ask for first name:
	printf("Please enter the contact's first name: ");
	scanf("%30s", name->firstName);
	clearKeyboard();

	// Ask for middle initial:
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	yorn = yes();
	if (yorn == 1)
	{
		printf("Please enter the contact's middle initial(s): ");
		scanf("%7s", name->middleInitial);
	}
	clearKeyboard();

	// Ask for last name:
	printf("Please enter the contact's last name: ");
	scanf("%35s", name->lastName);
}
void getAddress(struct Address* address)
{
	// Ask for street number:
	//	! Enforce values greater than 0
	do
	{
		printf("Please enter the contact's street number: ");
		address->streetNumber = getInt();
	} while (address->streetNumber < 1);

	// Ask for street name:
	printf("Please enter the contact's street name: ");
	scanf("[^\n]%40s", address->street);
	clearKeyboard();

	// Ask for apartment number:
	printf("Do you want to enter an apartment number? (y or n): ");
	int yorn = yes();
	if (yorn == 1)
	{
		do
		{
			printf("Please enter the contact's apartment number: ");
			address->apartmentNumber) = getInt();
		} while (address->apartmentNumber < 1);
	}

	// Ask for postal code:
	printf("Please enter the contact's postal code: ");
	scanf(" %7[^\n]", address->postalCode);

	// Ask for city:
	printf("Please enter the contact's city: ");
	scanf("%40s", address->city);

}
void getNumbers(struct Numbers* numbers)
{
	int yorn2;
	// Ask for cell number:
	printf("Please enter the contact's cell phone number: ");
	scanf(" %10[^\n]", numbers->cell);

	// Ask for home number:
	printf("Do you want to enter a home phone number? (y or n): ");
	yorn2 = yes();
	if (yorn2 == 1)
	{
		printf("Please enter the contact's home phone number: ");
		scanf(" %10s[^\n]", numbers->home);
	}

	// Ask for business number:
	printf("Do you want to enter a business phone number? (y or n): ");
	yorn2 = yes();
	if (yorn2 == 1)
	{
		printf("Please enter the contact's business phone number: ");
		scanf(" %10s[^\n]", numbers->business);
	}
}

void getContact(struct Contact* contact) {
	struct Contact newContact;
	
	getName(&newContact.name);
	getAddress(&newContact.address);
	getNumbers(&newContact.numbers);

	*contact = newContact;
}