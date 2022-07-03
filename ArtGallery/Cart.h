#pragma once
#include"ArtWork.h"
#include <vector>
using namespace std;
class Cart {
	//creating a list of ArtWork that user adds to Cart

	vector<ArtWork*> ArtworksAdded;
	//vector<int> ArtworksAdded;
public:
	Cart();
	//Adds Art to cart of user
	void AddArtWork(ArtWork*);	
	int noOfItems;

	//To remove from cart
	void removeArt(int);

	bool contains(ArtWork*);
	void empty();

	ArtWork* getArtWorkNo(int no);
	int getNoOfItems();
	double getSubTotal();
	double getShipping();
	double getTax();
	double getTotal();

	//friend class Order;
};
