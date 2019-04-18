#pragma once
#include <iostream>
#include "Contact.h"
#include "Menu.h"
#include "Owner.h"

class Controller
{
private:
	Contact contacts;
	Menu menu;
	Owner owner;
	
	void inputOwnerInfo();
	void printOwnerInfo();
	void editOwnerInfo();

	void addContact();
	void printContactList();
	void printContactDetail();
	void editContact();
	void copyContact();
	void removeContact();
	
	void runOwnerMenu();
	void runContactMenu();
public:
	void runMainMenu();
};