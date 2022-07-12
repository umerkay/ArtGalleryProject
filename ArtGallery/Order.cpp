#pragma once
#include "Order.h"

Order::Order(int userID, string date, string address, string comments, string contact, double total) :
	userID(userID),
	date(date),
	contact(contact),
	comments(comments),
	address(address),
	total(total)
{

}

double Order::getTotal() {
	return total;
}
