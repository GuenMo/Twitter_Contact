#include "Menu.h"
using namespace std;

Menu::Menu()
{
	strcpy_s(topMenu[0], 32, "1. 소유자 관리 기능");
	strcpy_s(topMenu[1], 32, "2. 연락처 정보 관리 기능");
	strcpy_s(topMenu[2], 32, "3. 프로그램 종료");

	strcpy_s(ownerMenu[0], 32, "1. 소유자 정보 입력");
	strcpy_s(ownerMenu[1], 32, "2. 소유자 정보 조회");
	strcpy_s(ownerMenu[2], 32, "3. 소유자 정보 수정");
	strcpy_s(ownerMenu[3], 32, "4. 이전 메뉴로");

	strcpy_s(contactMenu[0], 32, "1. 연락처 정보 입력");
	strcpy_s(contactMenu[1], 32, "2. 연락처 목록 조회");
	strcpy_s(contactMenu[2], 32, "3. 연락처 상세 조회");
	strcpy_s(contactMenu[3], 32, "4. 개별 연락처 수정");
	strcpy_s(contactMenu[4], 32, "5. 연락처 복사");
	strcpy_s(contactMenu[5], 32, "6. 개별 연락처 삭제");
	strcpy_s(contactMenu[6], 32, "7. 이전 메뉴로");

	menuType = 0;
}

void Menu::showMenu()
{
	if (menuType == 0)
		for (int i = 0; i < 3; i++)
			cout << topMenu[i] << endl;

	else if (menuType == 1)
		for (int i = 0; i < 4; i++)
			cout << ownerMenu[i] << endl;

	else if (menuType == 2)
		for (int i = 0; i < 7; i++)
			cout << contactMenu[i] << endl;
}

void Menu::setSeleceMenu(int selection)
{
	menuType = selection;
}

int Menu::execution()
{
	int selection;
	showMenu();
	cin >> selection;
	return selection;
}