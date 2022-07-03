#include "Gallery.h"
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

void Gallery::saveOrder(Order* o) {
	std::fstream file;

	file.open("Orders.csv", std::ios::out | std::ofstream::app);
	
	file << o->userID << "," << o->date << "," << o->contact << "," << o->comments << "," << o->address;

	file.close();
}

void Gallery::closedCallback() {
	std::fstream file;

	file.open("state.txt", std::ios::out | std::ofstream::trunc);
	if (userHasAuthenticated == false) {
		file << "false";
	}
	else {
		file << this->currUser->getID();
	}
	file.close();
}

void Gallery::loadData() {
	userHasAuthenticated = false;
	//load users

	//using json = nlohmann::json;
	//json j;
	//std::ifstream ifs("Users.json");
	
	///ifs >> j;
	//ifs.close();

	// int i = 0;
	// for (auto& _userit : _users.GetArray()) {
        //Users[0] = *(new User());
		//Users[0].setID(0);

		//json _user = j["Users"][0];
		
		//Users[0].setData(_user["username"], _user["password"], _user["name"], _user["gender"]);
		// i++;
	// }

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
		//if (i == 0) { i++; continue; }
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
		ArtWorks[i3].setData(stoi(row3[0]), row3[1], row3[2], row3[3], stoi(row3[4]), getArtistbyID(stoi(row3[5])));
		i3++;
	}

	std::ifstream file0("state.txt");

	string temp0;

	while (std::getline(file0, temp0)) {
		if (temp0 != "false") {
			currUser = &Users[stoi(temp0)];
			userHasAuthenticated = true;
			Cart* c = new Cart();
			currUser->setCart(c);
		}
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
		Cart* c = new Cart();
		currUser->setCart(c);
		return "OK";
	}
	else {
		return "Incorrect Password";
	}
}

bool Gallery::getUserHasAuthenticated() {
	return userHasAuthenticated;
}

int Gallery::getTotalArtWorks() {
	return totalArtWorks;
}

string Gallery::signUpUser(string username, string password, string name, string gender) {

	//check if username already exists
	if (findUserID(username) != -1) {
		return "Username already exists. Please sign in.";
	}

	std::fstream file;
	Users[totalUsers] = *(new User());
	Users[totalUsers].setID(totalUsers);
	Users[totalUsers].setData(username, password, name, gender);

	file.open("Users.csv", std::ios::out | std::ios::app);
	file << "\n" << totalUsers << "," << username << "," << password << "," << name << "," << gender;
	file.close();

	totalUsers += 1;

	return "Signed Up Successfully";
}

void Gallery::logoutUser() {
	userHasAuthenticated = false;
	std::fstream file;

	file.open("state.txt", std::ios::out | std::ofstream::trunc);
	file << "false";
	file.close();
	currUser = nullptr;

}

User* Gallery::getCurrUser() {
	return currUser;
}
//artist related
Artist* Gallery::getArtistbyID(int id) {
	return &Artists[id];
}