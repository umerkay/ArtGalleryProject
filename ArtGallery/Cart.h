#pragma once
#include<list>
#include"ArtWork.h"
using namespace std;
class Cart {
	list<ArtWork*> ArtworksAdded{};
public:
	void AddArtWork(ArtWork*);
	void removeArt(int);
};
