#pragma once
#include "User.h"
#include "ArtWork.h"
#include"Artist.h"

class Gallery {
private:
	User* Users;
	User* currUser;
	int totalUsers;
	bool userHasAuthenticated;
	//artist related
	Artist* Artists;
	Artist* currArtist;
	int totalArtists;

	//artwork related
	ArtWork* ArtWorks;
	int totalArtWorks;

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
	ArtWork* getArtWorkByID(int);
	int getTotalArtWorks();

	//artist related functions
	Artist* getArtistbyID(int id);


	void closedCallback();

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