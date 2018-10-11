#pragma once
#include<string>
#include"profile.h"
using namespace std;
class User {
private:
	string _useranme;
	std::size_t _paswordHash;
	bool checkPassword(string password);
	Hasher a;
	Profile profile;
	User(){};
public:
	User(string useranme, string password, string firstname, string lastname);
};