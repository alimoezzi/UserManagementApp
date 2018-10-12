#pragma once
#include"UserManger.h"
class login:private CurrentUser {
	int operator()(string& username, string& password);
};