#include "Admin.h"

void Admin::setData(string username, string password, string name, string gender) {
	setUsername(username);
	setPassword(password);
	setName(name);
	setAddress(gender);
	setIsAdmin(true);
};