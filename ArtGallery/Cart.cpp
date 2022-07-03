#include<list>
#include"Gallery.h"
#include"Cart.h"
#include"ArtWork.h"
using namespace std;

	/* take ArtWork type pointer
		and add Art to  list */

void Cart::AddArtWork(ArtWork* NewArtW) {
	ArtworksAdded.push_front(NewArtW);
}

	/*iterate over list of ArtWork in Cart and remove
	when idspecificed ID*/

void Cart::removeArt(int id) {
	list<ArtWork*>::iterator it;			//creating an iterator "it" for list of type Artwork*
	for (it = ArtworksAdded.begin(); it != ArtworksAdded.end(); ++it) {		/* iterate from
																																			beginning of list to end*/
		if (id == (*it)->get_id()) {			//check which ArtWork ID matches to the req ID
			it = ArtworksAdded.erase(it);		
			break;													
		}
		else {
			it++;
		}
	}

}

