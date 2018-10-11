#include "siqnup.h"
#include"UserManger.h"
int signUp(string firstname, string lastname, string username, string password) {
	for(User a : userList) {
	}
	User user(username, password, firstname, lastname);
	userList.push_back(user);
}
