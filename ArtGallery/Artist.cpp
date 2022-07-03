#include<string>
#include<iostream>
#include"Artist.h"	

	//setter function,uses this pointer to set data of current artist object
void Artist::setData( int iD, string name, string birthplace, int age, string StyleArt) {
	this->name = name;
	this->id = iD;
	this->born_place = birthplace;
	this->age = age;
	this->StyleArt = StyleArt;
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