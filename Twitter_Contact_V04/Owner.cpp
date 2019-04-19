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
	cout << "소유자 이름:\t\t" << name << endl;
	cout << "소유자 전화번호:\t" << phoneNumber << endl;
	cout << "소유자 이메일:\t\t" << email << endl;
	cout << "소유자 주소:\t\t" << address << endl;
	cout << "소유자 트위터 계정:\t" << twitterAccount << endl;
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