#include <iostream>
using namespace std;

class simpleCalc {
public:
	double num1;
	double num2;
	char oper;
	void f_inputs();
	double operations(double num1,char oper,double num2);
	void f_outputs();
	int checkOper(char oper,double num2);
	double f_add(double num1, double num2);
	double f_sub(double num1, double num2);
	double f_div(double num1, double num2);
	double f_mult(double num1, double num2);
	void calculator();

};

void simpleCalc::f_inputs() {
	cout << "Kindly enter the number then operand then number \n NUM1 OPER(+,-./,*) NUM2"<<endl;
	cout << "Enter first operand >>  ";
	cin >> num1;
	int check = 0;
	do {
		cout << "\nEnter operation >> ";
		cin >> oper;
		check = checkOper(oper,10);
	} while (check == 0);
	do {
		cout << "\nEnter second operand >>  ";
		cin >> num2;
		check = checkOper(oper,num2);
	} while (check == 0);

}

int simpleCalc::checkOper(char oper,double num2) {
	if (oper == '+' || oper == '-' || oper == '/' || oper == '*') {
		if (oper == '/' && num2 == 0) {
			cout << "A number cannot be divided by zero";
			return 0;
		}
		return 1;
	}
	else {
		cout << "ERROR ! WRONG OPERATOR \n USE DEFINED OPERATORS (+,-./ AND *) ";
		return 0;
	}
}

double simpleCalc::f_add(double  num1, double num2) {
	return num1 + num2;
}

double simpleCalc::f_sub(double num1, double num2) {
	return num1 - num2;
}

double simpleCalc::f_div(double num1, double num2) {
	return num1 / num2;
}

double simpleCalc::f_mult(double num1, double num2) {
	return num1 * num2;
}

double simpleCalc::operations(double num1, char oper,double num2) {
	switch (oper) {
	case '+':
		return f_add(num1, num2);
	case '-':
		return f_sub(num1, num2);
	case '/':
		return f_div(num1, num2);
	case '*':
		return f_mult(num1, num2);
	default:
		cout << "No operation was found" << endl;
	}
}

void simpleCalc::f_outputs() {
	cout << "ANSWER" << endl;
	cout << num1 << " " << oper << " " << num2 << " = " << operations(num1, oper, num2) << endl;
}

void simpleCalc::calculator() {
	int start = 1;
	char choice;
	do {
		f_inputs();
		f_outputs();
		cout << "Another operation : Y/N" << endl;
		cin >> choice;
		if (choice == 'Y' || choice == 'y') {
			start = 1;
		}
		else start = 0;
	} while (start == 1);
	
}

int main() {
	simpleCalc Calculator1;
	Calculator1.calculator();
	return 0;
}