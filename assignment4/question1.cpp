#include <iostream>
using namespace std;

class facto {
public:
	int value;
	void f_input();
	int checkInt(int value);
	long long f_iterative_facto(int value);
	long long f_recursive_facto(int value);
	void f_iterative_output();
	void f_recursive_output();
};

void facto::f_input() {
	int result = 0;
	do{
		cout << "Kindly input the value you want factorial to be performed on" << endl;
		cin >> value;
	    result = checkInt(value);
	} while (result == 1);
	cout << "Your input value is " << value << endl;
}

int facto::checkInt(int value) {
	if (value < 0) {
		cout << "Factorial not done for a negative number" << endl;
		return 1;
	}
	else {
		return 0;
	}
}

long long facto::f_iterative_facto(int value) {
	long long val = value - 1;
	long long fact = value;
	for (int i = 0 ; i < value-1; i++) {
		fact = fact * val ;
		val--;
	}
	return fact;
}

void facto::f_iterative_output() {
	cout << "The iterative function" << endl;
	cout << value << " ! = ";
	int fact;
	int disp = value;
	for (int i = 0; i < value; i++) {
		cout << disp;
		if (i != value - 1) {
			cout << " * ";
		}
		else {
			cout << " = ";
		}
		disp--;
	}
	cout << f_iterative_facto(value) << endl;
}

long long facto::f_recursive_facto(int value) {
	long long fact = value  ;
	long long val = value ;
	if (val == 0 || val == 1) {
		return 1;
	}
	else {
		return fact = fact * f_recursive_facto(val - 1);
	}
	
}

void facto::f_recursive_output() {
	cout << "The recursive function" << endl;
	cout << value << " ! = ";
	int fact;
	int disp = value;
	for (int i = 0; i < value; i++) {
		cout << disp;
		if (i != value - 1) {
			cout << " * ";
		}
		else {
			cout << " = ";
		}
		disp--;
	}
	cout << f_recursive_facto(value) << endl;
}

int main1(){
	facto Factorial;
	Factorial.f_input();
	Factorial.f_iterative_output();
	Factorial.f_recursive_output();
	return 0;
}