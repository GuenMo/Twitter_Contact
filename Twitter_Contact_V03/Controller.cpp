#include "Controller.h"
using namespace std;

void Controller::inputOwnerInfo()
{
	char name[20];
	char phoneNumber[13];
	char email[30];
	char address[50];
	char twitterAccount[20];

	cout << "������ �̸�:";
	cin >> name;
	cout << "������ ��ȭ��ȣ:";
	cin >> phoneNumber;
	cout << "������ �̸���:";
	cin >> email;
	cout << "������ �ּ�:";
	cin >> address;
	cout << "������ Ʈ���� ����:";
	cin >> twitterAccount;
	cout << "������ �Է��� �Ϸ� �Ǿ����ϴ�." << endl;

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
	cout << "1. ������ �̸� ����" << endl;
	cout << "2. ������ ��ȭ��ȣ ����" << endl;
	cout << "3. ������ �̸��� ����" << endl;
	cout << "4. ������ �ּ� ����" << endl;
	cout << "5. ������ Ʈ���� ���� ����" << endl;
	cout << "6. ���� ���� ���� �޴���" << endl;
	cin >> selection;

	switch (selection)
	{
	case 1:
		cout << "������ �̸� :";
		cin >> editString;
		owner.edintOwnerInfo(editString, nullptr, nullptr, nullptr, nullptr);
		break;
	case 2:
		cout << "������ ��ȭ��ȣ :";
		cin >> editString;
		owner.edintOwnerInfo(nullptr, editString, nullptr, nullptr, nullptr);
		break;
	case 3:
		cout << "������ �̸��� :";
		cin >> editString;
		owner.edintOwnerInfo(nullptr, nullptr, editString, nullptr, nullptr);
		break;
	case 4:
		cout << "������ �ּ� :";
		cin >> editString;
		owner.edintOwnerInfo(nullptr, nullptr, nullptr, editString, nullptr);
		break;
	case 5:
		cout << "������ Ʈ���� ���� :";
		cin >> editString;
		owner.edintOwnerInfo(nullptr, nullptr, nullptr, nullptr, editString);
		break;
	default:
		cout << "�ƹ��͵� �������� �ʾҽ��ϴ�." << endl;
	}
}

void Controller::addContact() 
{
	char name[20];
	char phoneNumber[13];
	char email[30];
	char address[50];

	cout << "����ó �̸� :";
	cin >> name;
	cout << "����ó ��ȭ��ȣ :";
	cin >> phoneNumber;
	cout << "����ó �̸��� :";
	cin >> email;
	cout << "����ó �ּ� :";
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
	cout << "1. index�� ����ó ��ȸ" << endl;
	cout << "2. �̸����� ����ó ��ȸ" << endl;
	cin >> selection;

	switch (selection)
	{
	case 1:
		int index;
		cout << "��ȸ�� ����ó index : ";
		cin >> index;
		contacts.printContact(index);
		break;
	case 2:
		char name[20];
		cout << "��ȸ�� �̸� : ";
		cin >> name;
		contacts.printContact(name);
		break;
	default:
		cout << "�߸� �Է��߽��ϴ�. �����޴��� ���ư��ϴ�." << endl;
	}
}

void Controller::editContact()
{
	int index;
	cout << "������ ����ó index : ";
	cin >> index;
	
	int selection;
	cout << "1. ����ó �̸� ����" << endl; 
	cout << "2. ����ó ��ȭ��ȣ ����" << endl;
	cout << "3. ����ó �̸��� ����" << endl;
	cout << "4. ����ó �ּ� ����" << endl;
	cout << "5. ���� ���� ���� �޴���" << endl;
	cin >> selection;

	char editString[50];
	switch (selection)
	{
	case 1:
		cout << "�̸� ���� : ";
		cin >> editString;
		contacts.editContactByIndex(index, editString, nullptr, nullptr, nullptr);
		cout << "����ó �̸��� �����Ǿ����ϴ�." << endl;
		break;
	case 2:
		cout << "��ȭ��ȣ ���� : ";
		cin >> editString;
		contacts.editContactByIndex(index, nullptr, editString, nullptr, nullptr);
		cout << "����ó ��ȭ��ȣ�� �����Ǿ����ϴ�." << endl;
		break;
	case 3:
		cout << "�̸��� ���� : ";
		cin >> editString;
		contacts.editContactByIndex(index, nullptr, nullptr, editString, nullptr);
		cout << "����ó �̸����� �����Ǿ����ϴ�." << endl;
		break;
	case 4:
		cout << "�ּ� ���� : ";
		cin >> editString;
		contacts.editContactByIndex(index, nullptr, nullptr, nullptr, editString);
		cout << "����ó �ּҰ� �����Ǿ����ϴ�." << endl;
		break;
	default:
		cout << "�ƹ��͵� �������� �ʾҽ��ϴ�." << endl;
		break; 
	}
}

void Controller::copyContact()
{
	int index;
	cout << "������ ����ó index : ";
	cin >> index;
	contacts.copyContact(index);
	cout << "����ó�� ���� �Ǿ����ϴ�." << endl;
}

void Controller::removeContact()
{
	int index;
	cout << "������ ����ó index : ";
	cin >> index;
	contacts.removeContactByIndex(index);
	cout << index << "��° ����ó�� ���� �Ǿ����ϴ�." << endl;
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
			cout << "���� �޴��� ���� ���ϴ�." << endl;
			break;
		default:
			cout << "�߸� �Է� �߽��ϴ�." << endl;
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
			cout << "���� �޴��� ���� ���ϴ�." << endl;
			break;
		default:
			cout << "�߸� �Է� �߽��ϴ�. �ٽ� ���ּ���." << endl;
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
			cout << "���α׷��� �����մϴ�." << endl;
			break;
		default:
			cout << "�߸� �Է� �߽��ϴ�." << endl;
		}
	} while (selection != 3);
}