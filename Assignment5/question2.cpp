#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main2() {
	string fileName = "studreg.txt";
	fstream file(fileName, ios::in | ios::out | ios::app);
	string userName;
	string password;
	cout << "Register by entering the following details;" << endl;
	cout << "Enter username: " << endl;
	cin >> userName;
	cout << "Enter password: " << endl;
	cin >> password;
	file << userName << endl;
	file << password << endl;
	userName=" ";
	password = " ";
	cout << "Login to the system by entering the following details;" << endl;
	cout << "Enter username: " << endl;
	cin >> userName;
	cout << "Enter password: " << endl;
	cin >> password;
	string lineUser;
	string linePassword;
	bool detailsTrue = false;
	string loginVerdict;
	file.seekg(0);
	while(getline(file,lineUser) && getline(file,linePassword)){
		if(userName == lineUser && password==linePassword){
			loginVerdict = "Login Successful";
			detailsTrue = true;
			break;
		}
		else if(userName != lineUser){
			detailsTrue = false;
			loginVerdict = "incorrect username";
		}
		else if (password != linePassword) {
			detailsTrue = false;
			loginVerdict = "incorrect Password ";
		}
	}
		while(getline(file,lineUser) && getline(file,linePassword)){
		if(userName != lineUser && password!=linePassword){
			loginVerdict = "both username and password are not correct";
			detailsTrue = false;
			break;
		}
	}
	cout << "You registered with the following details" << endl;
	string line;
	int num = 0;
	file.clear();
	file.seekg(0);
	while (getline(file, lineUser) && getline(file, linePassword)) {
		cout << "  Username: " << lineUser << endl;
		cout << "  Password: " << linePassword << endl;
	}

	cout << "You attempted to login with the following details;" << endl;
	cout << "  Username: " << userName << endl;
	cout << "  Password: " << password << endl;

	if(detailsTrue) {
		cout << loginVerdict << endl;
	}
	else {
		cout << "Unsuccessful Login" << endl;
		cout <<"  " << loginVerdict << endl;
	}
	
	return 0;
}