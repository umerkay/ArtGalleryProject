#include "ArtWork.h"

void ArtWork::setData(int id, string title, string typeOfArt, string creationDate, int price) {
	this->id = id;
	this->title = title;
	this->typeOfArt = typeOfArt;
	this->creationDate = creationDate;
	this->price = price;
};

string ArtWork::getTitle() {
	return title;
}
int ArtWork::get_id() {
	return id;
}