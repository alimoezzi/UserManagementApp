#pragma once
#include<string>
using namespace std;
class User {
private:
	string _useranme;
	string _paswordHash;
	User() {};
	bool checkPassword(string password);
	Hasher a;
public:
	User(string useranme, string password);
};