#pragma once
#include <string>
#include"ArtWork.h"
#include"Cart.h"
using namespace std;

class User {
public:
	User();
	void addToCart(ArtWork*);
	void removeFromCart();
	void setData(string, string, string, string);
	void setID(int id);

	string getUsername();

	bool authenticate(string, string); //checks if pw == username

private:
	string name, password, gender, username;
	int id;
	Cart* mycart;
};