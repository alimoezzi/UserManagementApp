//main entry
#include<iostream>
#include"UserManger.h"
using namespace std;

enum jumpList {
	LOGIN,LOGOUT,SIGNUP,EXIT
};
int prompt();
int	jump(jumpList s);
void errorHandler(Errors s);

int main(int argc, char ** argv) {
	while (prompt());
	puts("done.\n");
	return 0;
}


int prompt() {
	if(!currentuser->isLoggedIn()) puts("Choose an Option\n1. login \n3. signup \n4. exit");
	if (currentuser->isLoggedIn()) puts("Choose an Option\n2. logout \n4. exit");
	int s;

	cin >> s;
	return jump((jumpList)(s-1));
}


int	jump(jumpList s) {
		string username;
		string password;
		string firstanme;
		string lastname;
	switch (s) {
	case LOGIN:
		if (currentuser->isLoggedIn()) return 1;
		cout << "username: ";
		cin >> username;
		cout << "password: ";
		cin >> password;
		errorHandler((*currentuser)(username, password));
		return 1;
		break;
	case LOGOUT:
		if (!currentuser->isLoggedIn()) return 1;
		errorHandler(currentuser->logout());
		return 1;
		break;
	case SIGNUP:
		if (currentuser->isLoggedIn()) return 1;
		cout << "firstname: ";
		cin >> firstanme;
		cout << "lastname: ";
		cin >> lastname;
		cout << "username: ";
		cin >> username;
		cout << "password: ";
		cin >> password;
		errorHandler(signUp(firstanme, lastname, username, password));
		return 1;
		break;
	case EXIT:
		return 0;
		break;
	default:
		cout << "Wrong Option" << endl;
		return 1;
		break;
	}
}

void errorHandler(Errors s) {
	switch (s) {
	case Ok:
		cout << "Operation was successfuly done" << endl;
		break;
	case ExistingUser:
		cout << "User already exist" << endl;
		break;
	case PasswordLength:
		cout << "Password too short" << endl;
		break;
	case NOTYETLOGGEDIN:
		cout << "First Login" << endl;
		break;
	case PASSWORDWRONG:
		cout << "Password Wrong!" << endl;
		break;
	case USERNAMENOTFOUND:
		cout << "Username Not Found" << endl;
		break;
	case ALREADYLOGGEDIN:
		cout << "First logout" << endl;
		break;
	case ALREADYLOGGEDOUT:
		cout << "Already logged in" << endl;
		break;
	case SUCCESSFULLLOGIN:
		cout << "Successfully Logged in" << endl;
		break;
	default:
		break;
	}
}