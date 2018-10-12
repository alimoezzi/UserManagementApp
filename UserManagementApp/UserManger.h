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
	Errors logout();
	Errors operator()(string& username, string& password);
	bool isLoggedIn();
protected:
	CurrentUser() {};
private:
	Errors login(User *user);
	static CurrentUser* instance;
	static User* cu;
};

Errors signUp(string firstname, string lastname, string username, string password);
static CurrentUser* currentuser = currentuser->getInstance();

