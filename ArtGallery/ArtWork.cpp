#include "ArtWork.h"

	//Set data function of ArWork sets data members of ArtWork object using this pointer
void ArtWork::setData(int id, string title, string typeOfArt, string creationDate, int price) {
	this->id = id;
	this->title = title;
	this->typeOfArt = typeOfArt;
	this->creationDate = creationDate;
	this->price = price;
};

	//getter functions of ArtWork
string ArtWork::getTitle() {
	return title;
}
int ArtWork::get_id() {
	return id;
}