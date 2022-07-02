#include "Gallery.h"
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

int Gallery::findUserID(string username) {
	for (int i = 0; i < totalUsers; i++) {
		if (Users[i].getUsername() == username) {
			return i;
		}
	}
	return -1;
}

string Gallery::signInUser(string username, string password) {
	int UserID = findUserID(username);
	if (UserID == -1) return "Username not found";
	if (Users[UserID].authenticate(username, password) == true) {
		currUser = &Users[UserID];
		userHasAuthenticated = true;
		return "OK";
	}
	else {
		return "Incorrect Password";
	}
}

bool Gallery::getUserHasAuthenticated() {
	return userHasAuthenticated;
}

void Gallery::loadData() {
	std::ifstream file("Users.csv");

	totalUsers = 0;

	vector<string> row;
	string line, word, temp;

	while (std::getline(file, temp))
		++totalUsers;

	Users = new User[totalUsers + 1];

	int i = 0;

	std::ifstream fileR("Users.csv");

	while (i < totalUsers) {

		row.clear();
		getline(fileR, line);
		stringstream s(line);
		while (getline(s, word, ',')) {
			row.push_back(word);
		}

		Users[i] = *(new User());
		Users[i].setID(i);
		Users[i].setData(row[1], row[2], row[3], row[4]);
		i++;
	}
	//artist related
	std::ifstream file2("Artists.csv");

totalArtists = 0;

vector <string>  row2;
string line2, word2, temp2;

while (std::getline(file2, temp2))
++totalArtists;

Artists = new Artist[totalArtists + 1];

int i2 = 0;

std::ifstream fileR2("Artists.csv");

while (i2 < totalArtists) {

	row2.clear();
	getline(fileR2, line2);
	stringstream s2(line2);
	while (getline(s2, word2, ',')) {
		row2.push_back(word2);
	}

	Artists[i2] = *(new Artist());
	//Artists[i].setID(i);
	Artists[i2].setData(stoi(row2[0]), row2[1], row2[2], stoi(row2[3]), row2[4]);
	i2++;
}
}

string Gallery::signUpUser(string username, string password, string name, string gender) {

	//check if username already exists
	if (findUserID(username) != -1) {
		return "Username already exists. Please sign in.";
	}

	std::fstream file;
	file.open("Users.csv", std::ios::out | std::ios::app);

	Users[totalUsers] = *(new User());
	Users[totalUsers].setID(totalUsers);
	Users[totalUsers].setData(username, password, name, gender);

	file << "\n" << totalUsers << "," << username << "," << password << "," << name << "," << gender;

	totalUsers += 1;

	return "Signed Up Successfully";
}

void Gallery::logoutUser() {
	currUser = nullptr;
	userHasAuthenticated = false;
}

User* Gallery::getCurrUser() {
	return currUser;
}
//artist related
Artist* Gallery::getArtistbyID(int id) {
	return &Artists[id];
}