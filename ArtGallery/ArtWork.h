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

public:
	void setData(int, string, string, string, int /*, Artist* creator*/);
	string getTitle();
	int get_id();
};