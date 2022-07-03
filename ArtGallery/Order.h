#pragma once
#include "User.h"
#include "ArtWork.h"

class Order {
public:
	Order(int, string, string, string, string);
private:
	int userID;
	string date;
	string address; string comments; string contact;

	friend class Gallery;
};