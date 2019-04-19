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
	cout << index << "의 index를 가진 연란처 조회" << endl;
	cout << "연락처 이름:\t\t" << name << endl;
	cout << "연락처 전화번호:\t" << phoneNumber << endl;
	cout << "연락처 이메일:\t\t" << email << endl;
	cout << "연락처 주소:\t\t" << address << endl;
}

void Contact::printContact(const char *inName)
{
	char name[20];
	char phoneNumber[13];
	char email[30];
	char address[50];
	
	cout << inName << "의 이름을 가진 연란처 조회" << endl;
	
	for (int i = 0; i < numberOfContact; i++)
	{
		contacts[i].getContact(name, phoneNumber, email, address);
		if (strcmp(inName, name) == 0)
		{
			cout << "연락처 이름:\t\t" << name << endl;
			cout << "연락처 전화번호:\t" << phoneNumber << endl;
			cout << "연락처 이메일:\t\t" << email << endl;
			cout << "연락처 주소:\t\t" << address << endl;
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
		cout << index << "는 삭제가 불가능한 인텍스 입니다." << endl;
		return;
	}

	for (int i = index + 1; index < numberOfContact; index++)
	{
		contacts[i - 1] = contacts[i];
	}
	numberOfContact--;
}