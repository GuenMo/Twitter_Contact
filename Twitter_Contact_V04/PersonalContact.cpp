#include "PersonalContact.h"
using namespace std;

PersonalContact::PersonalContact(PersonalContact &obj)
{
	strcpy_s(name, 20, obj.name);
	strcpy_s(phoneNumber, 13, obj.phoneNumber);
	strcpy_s(email, 30, obj.email);
	strcpy_s(address, 50, obj.address);
}

void PersonalContact::inputContact(
	char *inName,
	char *inPhoneNumber,
	char *inEmail,
	char *inAddress)
{
	if(inName != nullptr)
		strcpy_s(name, 20, inName);
	
	if (inPhoneNumber != nullptr)
		strcpy_s(phoneNumber, 13, inPhoneNumber);
	
	if (inEmail != nullptr)
		strcpy_s(email, 30, inEmail);
	
	if (inAddress != nullptr)
		strcpy_s(address, 50, inAddress);
}

void PersonalContact::getContact(
	char *outName,
	char *outPhoneNumber,
	char *outEmail,
	char *outAddress)
{
	if (outName != nullptr)
		strcpy_s(outName, 20, name);

	if (outPhoneNumber != nullptr)
		strcpy_s(outPhoneNumber, 13, phoneNumber);

	if (outEmail != nullptr)
		strcpy_s(outEmail, 30, email);

	if (outAddress != nullptr)
		strcpy_s(outAddress, 50, address);
}

void PersonalContact::editContact(
	char *inName,
	char *inPhoneNumber,
	char *inEmail,
	char *inAddress)
{
	if (inName != nullptr)
		strcpy_s(name, 20, inName);

	if (inPhoneNumber != nullptr)
		strcpy_s(phoneNumber, 13, inPhoneNumber);

	if (inEmail != nullptr)
		strcpy_s(email, 30, inEmail);

	if (inAddress != nullptr)
		strcpy_s(address, 50, inAddress);
}

void PersonalContact::printPersonalContact()
{
	cout << endl << name << " " << phoneNumber << " " << email << " " << address << endl;
}











