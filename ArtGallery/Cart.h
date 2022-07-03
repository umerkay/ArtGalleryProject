#pragma once
#include<list>
#include"ArtWork.h"
using namespace std;
class Cart {
	//creating a list of ArtWork that user adds to Cart

	list<ArtWork*> ArtworksAdded{};
public:

	//Adds Art to cart of user
	void AddArtWork(ArtWork*);	

	//To remove from cart
	void removeArt(int);
};
