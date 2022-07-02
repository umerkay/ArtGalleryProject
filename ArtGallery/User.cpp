#include "User.h"
#include"Cart.h"
#include"ArtWork.h"
using namespace std;
//default constructor
User::User()  {
	Cart* mycart = new Cart ;
}

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
//add to cart
void User::addToCart(ArtWork* a1) {
	mycart->AddArtWork( a1);
}
//remove from art
void User::removeFromCart() {
	mycart->removeArt(id);
}
