#pragma once
#include<string>
#include<list>
#include"user.h"
using namespace std;
std::size_t Hasher(string const& s);
std::list<User> userList({ User("cppadmin","q!Edf@42b"), });
