#include "Customer.h"
#include"Cart.h"
#include"ArtWork.h"
using namespace std;
//default constructor

void Customer::setData(string username, string password, string name, string gender) {
	setUsername(username);
	setPassword(password);
	setName(name);
	setAddress(gender);
	setIsAdmin(false);
};


Cart* Customer::getCart() {
	return mycart;
}

void Customer::setDollarSpent(double d) {
	dollarSpent = d;
}

double Customer::getDollarSpent() {
	return dollarSpent;
}

void Customer::likeArtWork(int i) {
	likedArtWorks.push_back(i);
}

bool Customer::hasLiked(int i) {
	if (std::find(likedArtWorks.begin(), likedArtWorks.end(), i) != likedArtWorks.end()) {
		return true;
	}
	else {
		return false;
	}
}

void Customer::unLikeArtWork(int i) {
	std::vector<int>::iterator position = std::find(likedArtWorks.begin(), likedArtWorks.end(), i);
	if (position != likedArtWorks.end()) // == myVector.end() means the element was not found
		likedArtWorks.erase(position);
}

void Customer::setCart(Cart* c) {
	this->mycart = c;
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
