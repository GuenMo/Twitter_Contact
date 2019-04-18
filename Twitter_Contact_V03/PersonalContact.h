#pragma once
#include <iostream>

class PersonalContact
{
private:
	char name[20];
	char phoneNumber[13];
	char email[30];
	char address[50];
public:
	PersonalContact() {};
	PersonalContact(PersonalContact &obj);
	
	void inputContact(
		char *inName,
		char *inPhoneNumber	= nullptr,
		char *inEmail		= nullptr,
		char *inAddress		= nullptr);
	
	void getContact(
		char *outName,
		char *outPhoneNumber,
		char *outEmail,
		char *outAddress);

	void editContact(
		char *inName,
		char *inPhoneNumber = nullptr,
		char *inEmail		= nullptr,
		char *inAddress		= nullptr);

	void printPersonalContact();
};