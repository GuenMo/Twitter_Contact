#pragma once
#include <iostream>
#include "PersonalContact.h"

class Contact
{
private:
	PersonalContact contacts[100];
	int numberOfContact;
public:
	Contact();
	void inputContact(
		char *inName,
		char *inPhoneNumber = nullptr,
		char *inEmail = nullptr,
		char *inAddress = nullptr);
	void printContactList();
	void printContact(int index);
	void printContact(const char *inName);
	void editContactByIndex(
		int index,
		char *inName,
		char *inPhoneNumber = nullptr,
		char *inEmail = nullptr,
		char *inAddress = nullptr
	);
	void removeContactByIndex(int index);
	void copyContact(int index);
};