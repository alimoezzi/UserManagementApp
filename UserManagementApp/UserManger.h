#pragma once
#include<string>
#include<list>
#include"user.h"
using namespace std;
std::size_t Hasher(string const& s);
std::list<User> userList({ User("cppadmin","q!Edf@42b"), });

enum Errors {
	Ok, ExistingUser,PasswordLength,NOTYETLOGGEDIN,PASSWORDWRONG,USERNAMENOTFOUND,ALREADYLOGGEDIN, ALREADYLOGGEDOUT,SUCCESSFULLLOGIN
};

class CurrentUser {
public:
	static CurrentUser* getInstance(User* user);
	int login(User *user);
	int logout();
private:
	CurrentUser();
	static CurrentUser* instance;
	User* cu;
};
