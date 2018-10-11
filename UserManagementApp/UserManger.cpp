#include "UserManger.h"
#include<iostream>
#include<list>
using namespace std;

std::size_t Hasher(string const& s){
	std::size_t h1 = std::hash<std::string>{}(s);
	return (h1 << 1);
}


