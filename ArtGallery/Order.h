#pragma once
#include "Customer.h"
#include "ArtWork.h"

class Order {
public:
	Order(int, string, string, string, string, double);
	double getTotal();
private:
	int userID;
	string date;
	string address; string comments; string contact;
	double total;
	friend class Gallery;
};