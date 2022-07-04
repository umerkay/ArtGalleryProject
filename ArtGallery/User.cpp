#include "User.h"
#include"Cart.h"
#include"ArtWork.h"
using namespace std;
//default constructor

void Customer::setID(int id) {
	this->id = id;
}

int Customer::getID() {
	return id;
}

Cart* Customer::getCart() {
	return mycart;
}

void Customer::setCart(Cart* c) {
	this->mycart = c;
}

void Customer::setData(string username, string password, string name, string gender) {
	this->username = username;
	this->password = password;
	this->name = name;
	this->gender = gender;
};

string Customer::getUsername() {
	return username;
	//return std::to_string(mycart->getNoOfItems());
}

bool Customer::authenticate(string username, string password) {
	return this->username == username && this->password == password;
}
//add to cart
void Customer::addToCart(ArtWork* a1) {
	mycart->AddArtWork( a1);
}
//remove from art
void Customer::removeFromCart(int id) {
	mycart->removeArt(id);
}

void Customer::emptyCart() {
	mycart->empty();
}
