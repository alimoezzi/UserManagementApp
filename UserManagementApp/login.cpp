#include "login.h"

int login::operator()(string & username, string & password) {
	for (User a : userList) {
		if (a.getUsername()==username) {
			if (a.checkPassword(password)) {
				CurrentUser::login(&a);
				return SUCCESSFULLLOGIN;
			}
			return PASSWORDWRONG;
		}
	}
	return USERNAMENOTFOUND;
}
