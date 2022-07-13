#pragma once
#include <string>
#include"ArtWork.h"
#include"Artist.h"
#include"Order.h"
#include"User.h"
using namespace std;

class Admin : public User {
public:
	void setData(string, string, string, string);

	void addNewArtWork(ArtWork*);
	void removeArtWorkByID(int);
	void addNewArtist(ArtWork*);
	void removeArtistByID(int);
	void removeUserByID(int);
private:
};