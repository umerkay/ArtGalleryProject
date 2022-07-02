#include<string>
#include<iostream>
#include"Artist.h"

void Artist::setData( int iD, string name, string birthplace, int age, string StyleArt) {
	this->name = name;
	this->id = iD;
	this->born_place = birthplace;
	this->age = age;
	this->StyleArt = StyleArt;
}
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