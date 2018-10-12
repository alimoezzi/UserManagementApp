#include "user.h"

std::size_t Hasher(string const& s) {
	std::size_t h1 = std::hash<std::string>{}(s);
	return (h1 << 1);
}


bool User::checkPassword(string password) {
	return _paswordHash == Hasher(password);
}

User::User(string useranme, string password,string firstname,string lastname) :profile(firstname, lastname),
	_useranme(useranme), _paswordHash(Hasher(password)) {
}

const string & User::getUsername() {
	return _useranme;
}

User::User(string useranme, string password) :
	_useranme(useranme), _paswordHash(Hasher(password)) {
}

