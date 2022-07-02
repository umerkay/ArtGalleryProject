#pragma once
#include <string>
using namespace std;

class User {
public:
	User() {};
	void addToCart(Artwork*);
	void removeFromCart();
	void setData(string, string, string, string);
	void setID(int id);

	string getUsername();

	bool authenticate(string, string); //checks if pw == username

private:
	string name, password, gender, username;
	int id;
};