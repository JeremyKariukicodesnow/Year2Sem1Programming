#include <iostream>
#include <cctype>
using namespace std;

class simpleCalc {
public:
	double num1 ;
	double num2;
	char operand ;
	double answer = 0.0;


	void checkValidOperand() {
		if (operand != '+' && operand != '-' && operand != '*' && operand != '/') {
			cout << "Kindly put in a valid operand + or - or / or *" << endl;
			f_inputs();
		}
		else if (operand == '/' && num2 == 0) {
		  cout << "CANNOT DIVIDE A NUMBER BY ZERO" << endl;
		  f_inputs();
		}else{
			return;
		}
	}

	void f_inputs() {
		cout << "Kindly put in first number operand and second number pressing enter after each \n " << endl;
		cout << "Enter the first operand = " << endl;
		cin >> num1;
		cout << "\nEnter the arithmetic symbol= " << endl;
		cin >> operand;
		cout << "\nEnter the second operand = " << endl;
		cin >> num2;

		checkValidOperand();
		answer = calculation(num1,operand, num2);

	}

	void f_outputs() {
		cout << num1<< " " << operand<< " " << num2 << " = " << answer << endl;
	}

	double f_add(double a, double b) {
		double result = a + b;
		return result;
	}
	double f_sub(double a, double b) {
		double result = a - b;
		return result;
	}
	double f_mult(double a, double b) {
		double result = a * b;
		return result;
	}
	double f_div(double a, double b) {
		double result = a / b;
		return result;
	}

	double calculation(double num1, char operand, double num2) {
		double result;
		if (operand == '+') {
			return result = f_add(num1, num2);

		}
		else if (operand == '-') {
			return result = f_sub(num1, num2);
		}
		else if (operand == '/') {
			return result = f_div(num1, num2);
		}
		else if (operand == '*') {
			return result = f_mult(num1, num2);
		}
	}

};

int mainy() {
	char proceed = 'y';
	do{
		simpleCalc calc;
		calc.f_inputs();
		calc.f_outputs();
		cout << "Another Operation, [Y/N]" << endl;
		cin >> proceed;
		proceed = tolower(proceed);
	}while (proceed == 'y');
	cout << "\nBYE" << endl;

	return 0;
}