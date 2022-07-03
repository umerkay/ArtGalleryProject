#pragma once
#include "Order.h"

Order::Order(int userID, string date, string address, string comments, string contact) :
	userID(userID),
	date(date),
	contact(contact),
	comments(comments),
	address(address)
{

}