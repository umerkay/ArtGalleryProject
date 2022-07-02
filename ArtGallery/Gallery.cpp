#include "Gallery.h"
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

void Gallery::loadData() {
	//load users
	std::ifstream file("Users.csv");

	//calculate total users
	totalUsers = 0;

	vector<string> row;
	string line, word, temp;

	while (std::getline(file, temp))
		++totalUsers;

	//make array of total + 1 users to allow signup
	Users = new User[totalUsers + 1];

	int i = 0;

	std::ifstream fileR("Users.csv");

	while (i < totalUsers) {
		//create objects from all of the csv data
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
	//load artworks
	std::ifstream file3("ArtWorks.csv");

	//calculate total artworks
	totalArtWorks = 0;

	vector<string> row3;
	string line3, word3, temp3;

	while (std::getline(file3, temp3))
		++totalArtWorks;

	//make array of total + 1 users to allow signup
	ArtWorks = new ArtWork[totalArtWorks + 1];

	int i3 = 0;

	std::ifstream fileR3("ArtWorks.csv");

	while (i3 < totalArtWorks) {
		//create objects from all of the csv data
		row3.clear();
		getline(fileR3, line3);
		stringstream s3(line3);
		while (getline(s3, word3, ',')) {
			row3.push_back(word3);
		}

		ArtWorks[i3] = *(new ArtWork());
		ArtWorks[i3].setData(stoi(row3[0]), row3[1], row3[2], row3[3], stoi(row3[4]));
		i3++;
	}
}

ArtWork* Gallery::getArtWorkByID(int id) {
	return &ArtWorks[id];
}

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