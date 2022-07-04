#pragma once
#include <string>
#include"ArtWork.h"
#include"Cart.h"
using namespace std;

class Customer {
public:
	void addToCart(ArtWork*);
	void setData(string, string, string, string);
	void setID(int id);

	string getUsername();
	int getID();
	Cart* getCart();
	void setCart(Cart*);
	Cart* mycart;
	void removeFromCart(int);
	void emptyCart();

	bool authenticate(string, string); //checks if pw == username

private:
	string name, password, gender, username;
	int id;
};