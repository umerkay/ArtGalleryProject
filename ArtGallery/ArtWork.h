#pragma once
#include <string>
#include"Artist.h"
using namespace std;

class ArtWork {
private:
	int id;
	string title, typeOfArt;
	Artist* creator;
	string creationDate;
	int price;
	string img;

public:
	void setData(int, string, string, string, int, Artist*);
	string getImg();
	string getTitle();
	int getPrice();
	string getCreationDate();
	string getTypeOfArt();
	Artist* getCreator();
	int get_id();
};