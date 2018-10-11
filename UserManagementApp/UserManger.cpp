#include "UserManger.h"
#include<iostream>
#include<list>
using namespace std;

std::size_t Hasher::operator()(string const & s) const {
	std::size_t h1 = std::hash<std::string>{}(s);
	return (h1 << 1);
}

std::list<User> userList({User("cppadmin","q!Edf@42b"), });