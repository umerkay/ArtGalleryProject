#include "User.h"
#include"Cart.h"
#include"ArtWork.h"
using namespace std;
//default constructor

void User::setID(int id) {
	this->id = id;
}

int User::getID() {
	return id;
}

Cart* User::getCart() {
	return mycart;
}

void User::setCart(Cart* c) {
	this->mycart = c;
}

void User::setData(string username, string password, string name, string gender) {
	this->username = username;
	this->password = password;
	this->name = name;
	this->gender = gender;
};

string User::getUsername() {
	return username;
	//return std::to_string(mycart->getNoOfItems());
}

bool User::authenticate(string username, string password) {
	return this->username == username && this->password == password;
}
//add to cart
void User::addToCart(ArtWork* a1) {
	mycart->AddArtWork( a1);
}
//remove from art
void User::removeFromCart(int id) {
	mycart->removeArt(id);
}

void User::emptyCart() {
	mycart->empty();
}
