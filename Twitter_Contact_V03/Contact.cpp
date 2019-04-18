#include "Contact.h"
using namespace std;

Contact::Contact()
{
	numberOfContact = 0;
}

void Contact::inputContact(
	char *inName,
	char *inPhoneNumber,
	char *inEmail,
	char *inAddress)
{
	contacts[numberOfContact].inputContact(inName, inPhoneNumber, inEmail, inAddress);
	numberOfContact++;
}

void Contact::printContactList()
{
	char name[20];
	for (int i = 0; i < numberOfContact; i++)
	{
		contacts[i].getContact(name, nullptr, nullptr, nullptr);
		cout << i << ":" << name << endl;
	}
}

void Contact::printContact(int index)
{
	char name[20];
	char phoneNumber[13];
	char email[30];
	char address[50];
	contacts[index].getContact(name, phoneNumber, email, address);
	cout << index << "�� index�� ���� ����ó ��ȸ" << endl;
	cout << "����ó �̸�:\t\t" << name << endl;
	cout << "����ó ��ȭ��ȣ:\t" << phoneNumber << endl;
	cout << "����ó �̸���:\t\t" << email << endl;
	cout << "����ó �ּ�:\t\t" << address << endl;
}

void Contact::printContact(const char *inName)
{
	char name[20];
	char phoneNumber[13];
	char email[30];
	char address[50];
	
	cout << inName << "�� �̸��� ���� ����ó ��ȸ" << endl;
	
	for (int i = 0; i < numberOfContact; i++)
	{
		contacts[i].getContact(name, phoneNumber, email, address);
		if (strcmp(inName, name) == 0)
		{
			cout << "����ó �̸�:\t\t" << name << endl;
			cout << "����ó ��ȭ��ȣ:\t" << phoneNumber << endl;
			cout << "����ó �̸���:\t\t" << email << endl;
			cout << "����ó �ּ�:\t\t" << address << endl;
		}
	}	
}

void Contact::editContactByIndex(
	int index,
	char *inName,
	char *inPhoneNumber,
	char *inEmail,
	char *inAddress)
{
	contacts[index].editContact(inName, inPhoneNumber, inEmail, inAddress);
}

void Contact::copyContact(int index)
{
	contacts[numberOfContact] = PersonalContact(contacts[index]);
	numberOfContact++;
}

void Contact::removeContactByIndex(int index)
{
	if (index >= numberOfContact || index < 0)
	{
		cout << index << "�� ������ �Ұ����� ���ؽ� �Դϴ�." << endl;
		return;
	}

	for (int i = index + 1; index < numberOfContact; index++)
	{
		contacts[i - 1] = contacts[i];
	}
	numberOfContact--;
}