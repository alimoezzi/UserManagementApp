#pragma once
#include<string>
#include<list>
#include"user.h"
using namespace std;
class Hasher {
public:
	std::size_t operator()(string const& s) const;
};
