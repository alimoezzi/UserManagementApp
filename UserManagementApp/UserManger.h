#pragma once
#include<string>
using namespace std;
class Hasher {
public:
	std::size_t operator()(string const& s) const;
};
