#include "User.h"
#include"Cart.h"
using namespace std;

void User::setID(int id) {
	this->id = id;
}

void User::setData(string username, string password, string name, string gender) {
	this->username = username;
	this->password = password;
	this->name = name;
	this->gender = gender;
};

string User::getUsername() {
	return username;
}

bool User::authenticate(string username, string password) {
	return this->username == username && this->password == password;
}
