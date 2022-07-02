#include<list>
#include"Gallery.h"
#include"Cart.h"
#include"ArtWork.h"
using namespace std;

void Cart::AddArtWork(ArtWork* NewArtW) {
	ArtworksAdded.push_front(NewArtW);
}
void Cart::removeArt(int id) {
	list<ArtWork*>::iterator it;
	for (it = ArtworksAdded.begin(); it != ArtworksAdded.end(); ++it) {
		if (id == (*it)->get_id()) {
			it = ArtworksAdded.erase(it);
			break;
		}
		else {
			it++;
		}
	}

}

