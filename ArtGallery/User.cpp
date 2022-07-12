#include "User.h"
#include"ArtWork.h"
using namespace std;

void User::setID(int id) {
	this->id = id;
}

int User::getID() {
	return id;
}

string User::getUsername() {
	return username;
	//return std::to_string(mycart->getNoOfItems());
}

void User::setIsAdmin(bool b) {
	isAdmin = b;
}

bool User::getIsAdmin() {
	return isAdmin;
}

bool User::authenticate(string username, string password) {
	return this->username == username && this->password == password;
}

void User::setUsername(string u) {
	this->username = u;
}

void User::setAddress(string g) {
	this->address = g;
}

void User::setPassword(string p) {
	this->password = p;
}

void User::setName(string n) {
	this->name = n;
}

string User::getAddress() {
	return address;
}

string User::getPassword() {
	return password;
}

string User::getName() {
	return name;
}
