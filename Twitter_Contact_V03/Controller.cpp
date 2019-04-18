#include "Controller.h"
using namespace std;

void Controller::inputOwnerInfo()
{
	char name[20];
	char phoneNumber[13];
	char email[30];
	char address[50];
	char twitterAccount[20];

	cout << "소유자 이름:";
	cin >> name;
	cout << "소유자 전화번호:";
	cin >> phoneNumber;
	cout << "소유자 이메일:";
	cin >> email;
	cout << "소유자 주소:";
	cin >> address;
	cout << "소유자 트위터 계정:";
	cin >> twitterAccount;
	cout << "소유자 입력이 완료 되었습니다." << endl;

	owner.inputOwnerInfo(name, phoneNumber, email, address, twitterAccount);
}

void Controller::printOwnerInfo()
{
	owner.outputOwnerInfo();
}

void Controller::editOwnerInfo()
{
	char editString[50];
	int selection;
	cout << "1. 소유자 이름 수정" << endl;
	cout << "2. 소유자 전화번호 수정" << endl;
	cout << "3. 소유자 이메일 수정" << endl;
	cout << "4. 소유자 주소 수정" << endl;
	cout << "5. 소유자 트위터 계정 수정" << endl;
	cout << "6. 수정 없이 이전 메뉴로" << endl;
	cin >> selection;

	switch (selection)
	{
	case 1:
		cout << "수정할 이름 :";
		cin >> editString;
		owner.edintOwnerInfo(editString, nullptr, nullptr, nullptr, nullptr);
		break;
	case 2:
		cout << "수정할 전화번호 :";
		cin >> editString;
		owner.edintOwnerInfo(nullptr, editString, nullptr, nullptr, nullptr);
		break;
	case 3:
		cout << "수정할 이메일 :";
		cin >> editString;
		owner.edintOwnerInfo(nullptr, nullptr, editString, nullptr, nullptr);
		break;
	case 4:
		cout << "수정할 주소 :";
		cin >> editString;
		owner.edintOwnerInfo(nullptr, nullptr, nullptr, editString, nullptr);
		break;
	case 5:
		cout << "수정할 트위터 계정 :";
		cin >> editString;
		owner.edintOwnerInfo(nullptr, nullptr, nullptr, nullptr, editString);
		break;
	default:
		cout << "아무것도 수정되지 않았습니다." << endl;
	}
}

void Controller::addContact() 
{
	char name[20];
	char phoneNumber[13];
	char email[30];
	char address[50];

	cout << "연락처 이름 :";
	cin >> name;
	cout << "연락처 전화번호 :";
	cin >> phoneNumber;
	cout << "연락처 이메일 :";
	cin >> email;
	cout << "연락처 주소 :";
	cin >> address;
	contacts.inputContact(name, phoneNumber, email, address);
}

void Controller::printContactList()
{
	contacts.printContactList();
}

void Controller::printContactDetail()
{
	int selection;
	cout << "1. index로 연락처 조회" << endl;
	cout << "2. 이름으로 연락처 조회" << endl;
	cin >> selection;

	switch (selection)
	{
	case 1:
		int index;
		cout << "조회할 연락처 index : ";
		cin >> index;
		contacts.printContact(index);
		break;
	case 2:
		char name[20];
		cout << "조회할 이름 : ";
		cin >> name;
		contacts.printContact(name);
		break;
	default:
		cout << "잘못 입력했습니다. 이전메뉴로 돌아갑니다." << endl;
	}
}

void Controller::editContact()
{
	int index;
	cout << "수정할 연락처 index : ";
	cin >> index;
	
	int selection;
	cout << "1. 연락처 이름 수정" << endl; 
	cout << "2. 연락처 전화번호 수정" << endl;
	cout << "3. 연락처 이메일 수정" << endl;
	cout << "4. 연락처 주소 수정" << endl;
	cout << "5. 수정 없이 이전 메뉴로" << endl;
	cin >> selection;

	char editString[50];
	switch (selection)
	{
	case 1:
		cout << "이름 수정 : ";
		cin >> editString;
		contacts.editContactByIndex(index, editString, nullptr, nullptr, nullptr);
		cout << "연락처 이름이 수정되었습니다." << endl;
		break;
	case 2:
		cout << "전화번호 수정 : ";
		cin >> editString;
		contacts.editContactByIndex(index, nullptr, editString, nullptr, nullptr);
		cout << "연락처 전화번호가 수정되었습니다." << endl;
		break;
	case 3:
		cout << "이메일 수정 : ";
		cin >> editString;
		contacts.editContactByIndex(index, nullptr, nullptr, editString, nullptr);
		cout << "연락처 이메일이 수정되었습니다." << endl;
		break;
	case 4:
		cout << "주소 수정 : ";
		cin >> editString;
		contacts.editContactByIndex(index, nullptr, nullptr, nullptr, editString);
		cout << "연락처 주소가 수정되었습니다." << endl;
		break;
	default:
		cout << "아무것도 수정되지 않았습니다." << endl;
		break; 
	}
}

void Controller::copyContact()
{
	int index;
	cout << "복사할 연락처 index : ";
	cin >> index;
	contacts.copyContact(index);
	cout << "연락처가 복사 되었습니다." << endl;
}

void Controller::removeContact()
{
	int index;
	cout << "삭제할 연락처 index : ";
	cin >> index;
	contacts.removeContactByIndex(index);
	cout << index << "번째 연락처가 삭제 되었습니다." << endl;
}

void Controller::runOwnerMenu()
{
	int selection;
	do {
		menu.setSeleceMenu(1);
		selection = menu.execution();

		switch (selection)
		{
		case 1:
			inputOwnerInfo();
			break;
		case 2:
			printOwnerInfo();
			break;
		case 3:
			editOwnerInfo();
			break;
		case 4:
			cout << "이전 메뉴로 돌아 갑니다." << endl;
			break;
		default:
			cout << "잘못 입력 했습니다." << endl;
		}

	} while (selection != 4);
}

void Controller::runContactMenu()
{
	int selection;
	do {
		menu.setSeleceMenu(2);
		selection = menu.execution();

		switch (selection)
		{
		case 1:
			addContact();
			break;
		case 2:
			printContactList();
			break;
		case 3:
			printContactDetail();
			break;
		case 4:
			editContact();
			break;
		case 5:
			copyContact();
			break;
		case 6:
			removeContact();
			break;
		case 7:
			cout << "이전 메뉴로 돌아 갑니다." << endl;
			break;
		default:
			cout << "잘못 입력 했습니다. 다시 해주세요." << endl;
		}
	} while (selection != 7);
}

void Controller::runMainMenu()
{
	int selection;
	do {
		menu.setSeleceMenu(0);
		selection = menu.execution();

		switch (selection)
		{
		case 1:
			runOwnerMenu();
			break;
		case 2:
			runContactMenu();
			break;
		case 3:
			cout << "프로그램을 종료합니다." << endl;
			break;
		default:
			cout << "잘못 입력 했습니다." << endl;
		}
	} while (selection != 3);
}