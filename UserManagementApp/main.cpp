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
	puts("Choose an Option\n1. login \n2. logout \n3. signup \n4. exit");

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
		cout << "username: ";
		cin >> username;
		cout << "password: ";
		cin >> password;
		errorHandler((*currentuser)(username, password));
		return 1;
		break;
	case LOGOUT:
		errorHandler(currentuser->logout());
		return 1;
		break;
	case SIGNUP:
		cout << "firstname: ";
		cin >> firstanme;
		cout << "lastname: ";
		cin >> lastname;
		cout << "username: ";
		cin >> username;
		cout << "lastname: ";
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