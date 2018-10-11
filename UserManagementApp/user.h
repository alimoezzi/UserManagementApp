#pragma once
#include<string>
#include"profile.h"
#include"UserManger.h"
using namespace std;
class User {
private:
	string _useranme;
	std::size_t _paswordHash;
	bool checkPassword(string password);
	Profile profile;
	User(){};
public:
	User(string useranme, string password);
	User(string useranme, string password, string firstname, string lastname);
	const string& getUsername();
};