#include "UserManger.h"
#include<iostream>
#include<list>
using namespace std;

std::size_t Hasher(string const& s){
	std::size_t h1 = std::hash<std::string>{}(s);
	return (h1 << 1);
}

CurrentUser * CurrentUser::getInstance(User* user) {
	if (!instance) {
		instance = new CurrentUser();
		instance->cu = user;
	};
	return instance;
}
int CurrentUser::login(User* user) {
	if (cu != nullptr) {
		return ALREADYLOGGEDIN;
	}
	this->cu = user;
	return 0;
}

int CurrentUser::logout() {
	if (cu == nullptr) {
		return ALREADYLOGGEDOUT;
	}
	this->cu = nullptr;
	return 0;
}
