#include<list>
#include"Gallery.h"
#include"Cart.h"
using namespace std;

class Cart {
	list<Artwork*> ArtworksAdded{};
public: 
	Artwork* AddArtwork(Artwork*);
	void removeArt(int);
	};
Artwork* Cart::AddArtwork(Artwork* NewArtW) {
	ArtworksAdded.push_front(NewArtW);
}
void Cart::removeArt(int id) {
	list<int>::iterator it;
	for (it = g.begin(); it != g.end(); ++it) {
		if (id == it->getId()) {
			
		}
	}

}

