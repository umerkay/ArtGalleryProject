#pragma once
#include <string>
#include"ArtWork.h"
using namespace std;

class User {
public:
	virtual void setData(string, string, string, string) = 0;

	void setID(int id);
	void setUsername(string);
	void setAddress(string);
	void setPassword(string);
	void setName(string);

	string getUsername();
	int getID();
	string getAddress();
	string getPassword();
	string getName();

	void setIsAdmin(bool);
	bool getIsAdmin();

	bool authenticate(string, string); //checks if pw == username

private:
	string name, password, address, username;
	bool isAdmin;
	int id;
};