#include "user.h"
#include"UserManger.h"

bool User::checkPassword(string password) {
	return _paswordHash == Hasher(password);
}

User::User(string useranme, string password,string firstname,string lastname) :profile(firstname, lastname),
	_useranme(useranme), _paswordHash(Hasher(password)) {
}

User::User(string useranme, string password) :
	_useranme(useranme), _paswordHash(Hasher(password)) {
}
