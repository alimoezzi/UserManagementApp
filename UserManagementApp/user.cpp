#include "user.h"
#include"UserManger.h"

bool User::checkPassword(string password) {
	return _paswordHash == a(password);
}

User::User(string useranme, string password) :_useranme(useranme), _paswordHash(a(password)) {
}
