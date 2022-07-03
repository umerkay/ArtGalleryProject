#include<string>
#include<iostream>
#include"Artist.h"

static std::string STR(System::String^ string);

	//setter function,uses this pointer to set data of current artist object
void Artist::setData( int iD, string name, string birthplace, int age, string StyleArt) {
	this->name = name;
	this->id = iD;
	this->born_place = birthplace;
	this->age = age;
	this->StyleArt = StyleArt;
	this->Img = STR("Artists/" + id.ToString() + ".png");
}

string Artist::getImg() {
	return Img;
}

	//getter function definitions
string Artist::get_name() {
	return name;
}
int Artist::get_id() {
	return id;
}
string Artist::get_bornplace() {
	return born_place;
}
int Artist::get_age() {
	return age;
}
string Artist::get_StyleArt() {
	return StyleArt;
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