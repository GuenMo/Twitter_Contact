#pragma once
#include <iostream>

class Menu
{
private:
	char topMenu[3][32];
	char ownerMenu[4][32];
	char contactMenu[7][32];
	int menuType;
public:
	Menu();
	void showMenu();
	void setSeleceMenu(int selection);
	int execution();
};
