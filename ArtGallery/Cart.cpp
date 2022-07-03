#include<list>
#include"Cart.h"
#include"Gallery.h"
#include"ArtWork.h"
using namespace std;

Cart::Cart() {
	noOfItems = 0;
}

bool Cart::contains(ArtWork* A) {
	return std::count(ArtworksAdded.begin(), ArtworksAdded.end(), A);
}

	/* take ArtWork type pointer
		and add Art to  list */

void Cart::AddArtWork(ArtWork* NewArtW) {
	noOfItems++;
	ArtworksAdded.push_back(NewArtW);
}

void Cart::removeArt(int no) {
	ArtworksAdded.erase(ArtworksAdded.begin() + no);
	noOfItems--;
}

ArtWork* Cart::getArtWorkNo(int no) {
	return ArtworksAdded[no];
}

int Cart::getNoOfItems() {
	return ArtworksAdded.size();
};

void Cart::empty() {
	ArtworksAdded.clear();
}

double Cart::getSubTotal() {
	double val = 0;
	int i = 0;
	vector<ArtWork*>::iterator it;			//creating an iterator "it" for list of type Artwork*
	for (it = ArtworksAdded.begin(); it != ArtworksAdded.end(); ++it) {		/* iterate from */
		val += ArtworksAdded[i]->getPrice();
		i++;
	}
	return val;
};

double Cart::getShipping() {
	return ArtworksAdded.size() * 100;
};

double Cart::getTax() {
	return ArtworksAdded.size() * 130;
};

double Cart::getTotal() {
	return getSubTotal() + getShipping() + getTax();
};