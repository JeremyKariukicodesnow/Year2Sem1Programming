#include<iostream>
using namespace std;

float num1, num2;
float sum;
float cube1 =1.0, cube2=1.0;
float largeCube,sum_square;
float large_btwn_cube_square;
int cube = 3 ,square =2;

void input() {
	cout << "Inputs" << endl;
	cout << "Enter first number \n"<<endl;
	cin >> num1;
	cout << "Enter second number \n"<<endl;
	cin >> num2;
}

float add_two(float num1,float num2) {
	return num1 + num2;
}

void comp_cube(float num1, float num2) {
	for (int i = 0; i < cube; i++) {
		cube1 = cube1 * num1;
	}
	for (int i = 0; i < cube; i++) {
		cube2 = cube2 * num2;
	}
}

void compare_cube(float cube1, float cube2) {
	if (cube1 > cube2) {
		largeCube = cube1;
		cout << "The Largest Cube ;" << cube1 << " is larger than " << cube2 << endl;
		cout << "The Cube of ;" << num1 << " is larger than cube of  " << num2 << endl;
	}
	else if (cube2 > cube1) {
		largeCube = cube2;
		cout << "The Largest Cube ;" << cube2 << " is larger than " << cube1 << endl;
		cout << "The  Cube of ;" << num2 << " is larger than cube of " << num1 << endl;
	}
}

void comp_square(float sum) {
	sum_square = sum * sum;
	cout << "The Square of sum ;" << sum << " ^ " << square << " = " << sum_square << endl;
}

void comp_cube_square(float largeCube, float sum_square) {
	if (largeCube > sum_square) {
		large_btwn_cube_square = largeCube;
		cout << "The Largest of Cube and Sum  ;" << largeCube << " > " << sum_square << endl;
	}
	else if (sum_square > largeCube) {
		large_btwn_cube_square = sum_square;
		cout << "The Largest of Cube and Sum  ;" << sum_square << " > " << largeCube << endl;
	}
}

void output() {
	cout << "You entered " << num1 << " and " << num2 << endl;
	sum = add_two(num1, num2);
	cout << "The Sum ; " << num1 << " + " << num2 << "=" << sum << endl;
	comp_cube(num1, num2);
	cout << "The Cube ;" << num1 << " ^ " << cube << " = "<< cube1 << endl;
	cout << "The Cube ;" << num2 << " ^ " << cube << " = " << cube2 << endl;
	compare_cube(cube1, cube2);
	comp_square(sum);
	comp_cube_square(largeCube, sum_square);
}

int main1() {
	input();
	output();
	return 0;
}