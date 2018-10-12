#pragma once
#include<string>
#include<list>
#include"user.h"
using namespace std;


enum Errors {
	Ok, ExistingUser,PasswordLength,NOTYETLOGGEDIN,PASSWORDWRONG,USERNAMENOTFOUND,ALREADYLOGGEDIN, ALREADYLOGGEDOUT,SUCCESSFULLLOGIN
};

class CurrentUser {
public:
	static CurrentUser* getInstance();
	Errors login(User *user);
	Errors logout();
	Errors operator()(string& username, string& password);
protected:
	CurrentUser() {};
private:
	static CurrentUser* instance;
	static User* cu;
};

Errors signUp(string firstname, string lastname, string username, string password);

std::list<User> userList({ User("cppadmin","q!Edf@42b"), });
