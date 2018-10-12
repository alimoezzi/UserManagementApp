#pragma once
#include<string>
#include"profile.h"
using namespace std;

std::size_t Hasher(string const& s);

class User {
private:
	string _useranme;
	std::size_t _paswordHash;
	Profile profile;
	User();
public:
	User(string useranme, string password);
	User(string useranme, string password, string firstname, string lastname);
	const string& getUsername();
	bool checkPassword(string password);
};