#pragma once
#include "User.h"

class Gallery {
private:
	User* Users;
	User* currUser;
	int totalUsers;
	bool userHasAuthenticated;

	//user related
	int findUserID(string);

public:

	//self
	void loadData();
	bool getUserHasAuthenticated();

	//user related functions
	string signUpUser(string, string, string, string); //returns message
	string signInUser(string, string);
	User* getCurrUser();
	void logoutUser();

	//artwork related

	//artist related
};

static std::string toStandardString(System::String^ string)
{
	using System::Runtime::InteropServices::Marshal;

	System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
	char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
	std::string returnString(charPointer, string->Length);
	Marshal::FreeHGlobal(pointer);


	return returnString;
}