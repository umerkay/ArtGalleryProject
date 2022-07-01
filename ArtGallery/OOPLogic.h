// #pragma once
// #include <string>
// using namespace std;

// class User {
// public:
// 	void setData(string, string, string, string);
// 	void setID(int id);

// 	string getUsername();

// 	bool authenticate(string, string); //checks if pw == username

// private:
// 	string name, password, gender, username;
// 	int id;
// };

// class Gallery {
// private:
// 	User* Users;
// 	User* currUser;
// 	int totalUsers;
// 	bool userHasAuthenticated;

// 	//user related
// 	int findUserID(string);

// public:

// 	//self
// 	void loadData();
// 	bool getUserHasAuthenticated();

// 	//user related functions
// 	string signUpUser(string, string, string, string); //returns message
// 	string signInUser(string, string);
// 	User* getCurrUser();
// 	void logoutUser();

// 	//artwork related

// 	//artist related
// };

// static std::string toStandardString(System::String^ string)
// {
// 	using System::Runtime::InteropServices::Marshal;

// 	System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
// 	char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
// 	std::string returnString(charPointer, string->Length);
// 	Marshal::FreeHGlobal(pointer);


// 	return returnString;
// }