#include "UserManger.h"

std::size_t Hasher::operator()(string const & s) const {
	std::size_t h1 = std::hash<std::string>{}(s);
	return (h1 << 1);
}
