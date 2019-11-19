// Structure Types
struct Name {
	char firstName[31];
	char middleInitial[36];
	char lastName[36];
};

struct Address {
	int streetNumber, apartmentNumber;
	char street[41], postalCode[41], city[41];
};

struct Numbers {
	char cell[11], home[11], business[11];
};

struct Contact {
	struct Name	name;
	struct Address address;
	struct Numbers numbers;
};

// Function Prototypes
void getName(struct Name* name);
void getAddress(struct Address* address);
void getNumbers(struct Numbers* numbers);
void getContact(struct Contact* contact);