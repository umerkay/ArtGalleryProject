#pragma once
using namespace std;
class  Artist {
	string name;
	int id;
	string born_place;
	int age;
	string StyleArt;
public:
	//setter function
	void setData(int, string, string, int, string);

	//getter functions
	string get_name();
	int get_id();
	string get_bornplace();
	int get_age();
	string get_StyleArt();
};

