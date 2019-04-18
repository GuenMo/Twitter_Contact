#include "Owner.h"
using namespace std;

void Owner::inputOwnerInfo(
	char *inName,
	char *inPhoneNumber,
	char *inEmail,
	char *inAddress,
	char *inTwitterAccount)
{
	if (inName != nullptr)
		strcpy_s(name, 20, inName);

	if (inPhoneNumber != nullptr)
		strcpy_s(phoneNumber, 13, inPhoneNumber);

	if (inEmail != nullptr)
		strcpy_s(email, 30, inEmail);

	if (inAddress != nullptr)
		strcpy_s(address, 50, inAddress);

	if (inTwitterAccount != nullptr)
		strcpy_s(twitterAccount, 20, inTwitterAccount);
}

void Owner::outputOwnerInfo()
{
	cout << "������ �̸�:\t\t" << name << endl;
	cout << "������ ��ȭ��ȣ:\t" << phoneNumber << endl;
	cout << "������ �̸���:\t\t" << email << endl;
	cout << "������ �ּ�:\t\t" << address << endl;
	cout << "������ Ʈ���� ����:\t" << twitterAccount << endl;
}

void Owner::edintOwnerInfo(
	char *inName,
	char *inPhoneNumber,
	char *inEmail,
	char *inAddress,
	char *inTwitterAccount)
{
	if (inName != nullptr)
		strcpy_s(name, 20, inName);

	if (inPhoneNumber != nullptr)
		strcpy_s(phoneNumber, 13, inPhoneNumber);

	if (inEmail != nullptr)
		strcpy_s(email, 30, inEmail);

	if (inAddress != nullptr)
		strcpy_s(address, 50, inAddress);

	if (inTwitterAccount != nullptr)
		strcpy_s(twitterAccount, 20, inTwitterAccount);
}