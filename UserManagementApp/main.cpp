//main entry
#include<iostream>
#include"UserManger.h"
using namespace std;

enum jumpList {
	LOGIN,LOGOUT,SIGNUP,EXIT
};

int main(int argc, char ** argv) {
	while (prompt());
	puts("done.\n");
	return 0;
}


int prompt() {
	puts("Choose an Option\n1. login \n2. logout \n3. signup \n4. exit");

	int s;

	cin >> s;
	return jump((jumpList)s);
}


int	jump(jumpList s) {
	switch (s) {
	case LOGIN:
		break;
	case LOGOUT:
		break;
	case SIGNUP:
		break;
	case EXIT:
		break;
	default:
		break;
	}
}