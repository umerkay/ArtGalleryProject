#include "ArtWork.h"

static std::string STR(System::String^ string);

void ArtWork::setData(int id, string title, string typeOfArt, string creationDate, int price, Artist* A) {
	this->id = id;
	this->title = title;
	this->typeOfArt = typeOfArt;
	this->creationDate = creationDate;
	this->price = price;
	this->img = STR("ArtWorks/" + id.ToString() + ".png");
	this->creator = A;
};

string ArtWork::getImg() {
	return img;
}

Artist* ArtWork::getCreator() {
	return this->creator;
}

string ArtWork::getTitle() {
	return title;
}
int ArtWork::get_id() {
	return id;
}

static std::string STR(System::String^ string)
{
	using System::Runtime::InteropServices::Marshal;

	System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
	char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
	std::string returnString(charPointer, string->Length);
	Marshal::FreeHGlobal(pointer);


	return returnString;
}