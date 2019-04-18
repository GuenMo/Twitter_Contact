#pragma once
#include <iostream>

class Owner
{
private:
	char name[20];
	char phoneNumber[13];
	char email[30];
	char address[50];
	char twitterAccount[20];

public:
	void inputOwnerInfo(
		char *inName, 
		char *inPhoneNumber		= nullptr, 
		char *inEmail			= nullptr, 
		char *inAddress			= nullptr, 
		char *inTwitterAccount	= nullptr);

	void outputOwnerInfo();

	void edintOwnerInfo(
		char *inName,
		char *inPhoneNumber = nullptr,
		char *inEmail = nullptr,
		char *inAddress = nullptr,
		char *inTwitterAccount = nullptr);
};
