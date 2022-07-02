#pragma once
#include <string>
using namespace std;

class Artist;

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
};