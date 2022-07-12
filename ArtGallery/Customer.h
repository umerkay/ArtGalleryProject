#pragma once
#include <string>
#include"ArtWork.h"
#include"Cart.h"
#include"User.h"
using namespace std;

class Customer : public User {
public:
	void addToCart(ArtWork*);

	Cart* getCart();
	void setCart(Cart*);
	void removeFromCart(int);
	void emptyCart();
	void setData(string, string, string, string);

	void setDollarSpent(double);
	double getDollarSpent();


	void likeArtWork(int);
	void unLikeArtWork(int);

	bool hasLiked(int);

private:
	Cart* mycart;
	double dollarSpent;

	vector<int> likedArtWorks;
};