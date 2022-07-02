#pragma once
#include<list>
using namespace std;
class Cart {
	list<Artwork*> ArtworksAdded{};
public:
	Artwork* AddArtwork(Artwork*);
	void removeArt(int);
};
