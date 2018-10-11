#include "siqnup.h"
Errors signUp(string firstname, string lastname, string username, string password) {
	if (password.length() < 8) {
		return PasswordLength;
	}
	for(User a : userList) {
		if (a.getUsername() == username) {
			return ExistingUser;
		}
	}
	User user(username, password, firstname, lastname);
	userList.push_back(user);
	return Ok;
}
