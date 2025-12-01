//JEREMY MWANGI KARIUKI REG NO : J174 / 1249 / 2024
//ELECTRICAL ENGINEERING
//KENYATTA UNIVERSITY
//SCHOOL OF ENGINEERING AND TECHNOLOGY
//DEPARTMENT OF ELECTRICAL AND ELECTRONICS ENGINEERING
//EEE 202: COMPUTER PROGRAMMING II
//JEREMY MWANGI KARIUKI REG NO : J174/1249/2024
//LAB EXERCISE I and II
//
//// QUESTION 1
//a) Write a C++ program that consists of functions to compute the sum and cubes of two numbers.The program
//should ask the user to enter the two numbers(num1 and num2).Using the add_two() function, the program should
//compute the sum of the two numbers.The program should also use the function comp_cube() to compute the cube
//of each of the two numbers.Another function, compare_cubes() should be used to compare the two computed
//cubes to find the largest of them.The program should also compare the largest cube with the square of the sum to
//find the smallest.Use comp_square() function to compute the square of the sum.Note: Do not use inbuilt math
//functions in C++.

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

int main() {
	input();
	output();
	return 0;
}

////QUESTION2
//Page 2 of 2
//b) Using arrays write a C++ program that accepts any user defined number of integer inputs(strictly between 1 and
//10, inclusive) and finds:
//i.the total number of values greater than or equals 5 (greater_than_or_equals_5)
//ii.the total number of values less than 5 (less_than_5)
//The program then compares less_than_5 and greater_than_or_equals_5 and displays which of the two are many.
//The program should also sort the input array in ascending order and repeatedly print it five time

#include<iostream>
using namespace std;

int elements;
int defaultEl = 12;
int arr[20];
int sorted_arr[20];
int great_equal_5 = 0;
int less_5 = 0;

void input1() {
	cout << "Enter num of elements you  want \n If want default number 12 press 0 \n >>>";
	cin >> elements;
	if (elements <= 0) {
		elements = defaultEl;
	}
	cout << "Enter " << elements << " elements" << endl;
	for (int i = 0; i < elements; i++) {
		cout << " >>>  " << endl;
		cin >> arr[i];
	}
	cout << "You entered the following numbers " << endl;
	for (int i = 0; i < elements; i++) {
		cout << arr[i];
		if (i != 0 || i < elements) {
			cout << " , ";
		}
	}
	cout << endl;
}

void great_less() {
	for (int i = 0; i < elements; i++) {
		if (arr[i] >= 5) {
			great_equal_5++;
		}
		else {
			less_5++;
		}
	}
	cout << "Number of values greater than or equal to 5 :>>> " << great_equal_5 << endl;
	cout << "Number of values less than 5 :>>> " << less_5 << endl;
}

void compGreatLess() {
	if (great_equal_5 > less_5) {
		cout << "The values greater than or equals 5 are more than those that are less than 5" << endl;
	}
	else if (less_5 > great_equal_5) {
		cout << "The values less than 5 are more than those that are greater than or equals 5" << endl;
	}
	else {
		cout << "The values greater than or equals 5 are equal to those that are less than 5" << endl;
	}
}

void sort_arr() {
	int temp = 0;
	for (int i = 0; i < elements; i++) {
		sorted_arr[i] = arr[i];
	}
	for (int i = 0; i < elements - 1; i++) {
		for (int j = 0; j < elements - 1; j++) {
			if (sorted_arr[j] > sorted_arr[j + 1]) {
				temp = sorted_arr[j];
				sorted_arr[j] = sorted_arr[j + 1];
				sorted_arr[j + 1] = temp;
			}
		}
	}
}

void showSortedArr() {
	cout << "The sorted Array" << endl;
	int i = 0;
	do {
		for (int i = 0; i < elements; i++) {
			cout << sorted_arr[i];
			if (i != elements || i != elements - 1) {
				cout << " , ";
			}
		}
		cout << endl;
		i++;
	} while (i < 5);
}

void output1() {
	input1();
	great_less();
	compGreatLess();
	sort_arr();
	showSortedArr();
}

int main() {
	output1();
	return 0;
}

//// QUESTION 3 ASSIGNMENT2
//LAB EXERCISE II
//Question(a)
//Using arrays and pointers write a C++ program to sort a set of n numbers entered from the keyboard by the
//user using bubble sort algorithm.Sort the n numbers in both ascending and descending order
//Bubble Sort Method :
//? The list is divided into two sublists : sorted and unsorted
//? The largest element is bubbled from the unsorted list and moved to the sorted sublist.
//? After that, the wall moves one element backwards, increasing the number of sorted elements and
//decreasing the number of unsorted ones
//? Each time an element moves from the unsorted part to the sorted part one sort pass is completed
//? Given a list of n elements, bubble sort requires up to n - 1 passes to sort the data

# include <iostream>
using namespace std;
int n;//number of elements

int* f_input() {
	int contTrue = 1;
	int i = 0;
	int* list = new int(n);
	cout << "Enter the numbers you want in list. Enter 0 if do not wish to add additional numbers" << endl;
	while (contTrue != 0) {
		cin >> list[i];
		i++;
		n++;
		cout << "press 1 to continue /// 0 to exit" << endl;
		cin >> contTrue;
		if (contTrue != 0) {
			cout << "Enter next number" << endl;
		}
	}
	return list;
}

void f_disp_list(int* arr, int n) {
	cout << "You entered the following numbers " << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i];
		if (i != 0 || i < n - 1) {
			cout << " , ";
		}
	}
	cout << endl;
}

int* f_swap(int* list, int wall, int ver) {
	int large;
	int small;
	if (ver == 1) {
		for (int i = 0; i < wall - 1; i++) {
			if (list[i] > list[i + 1]) {
				large = list[i];
				list[i] = list[i + 1];
				list[i + 1] = large;
			}
		}
	}
	else if (ver == 2) {
		for (int i = 0; i < wall - 1; i++) {
			if (list[i] < list[i + 1]) {
				small = list[i];
				list[i] = list[i + 1];
				list[i + 1] = small;
			}
		}
	}
	return list;
}

void f_disp_ascending(int* list, int n, int iter, int wall) {
	cout << iter << "th Iteration = ";
	for (int i = 0; i < n; i++) {
		cout << list[i];
		if (i == wall - 2) {
			cout << " ,|||";
		}
		if (i < n - 1) {
			cout << " , ";
		}
	}
	cout << endl;
}


int* f_sort_ascending(int* list, int n) {
	int wall = n;
	int iter = 1;
	int ver = 1;
	for (int i = 0; i < n - 1; i++) {
		list = f_swap(list, wall, ver);
		f_disp_ascending(list, n, iter, wall);
		iter++;
		wall--;
	}
	cout << "The Final Sorted ascending List = ";
	for (int i = 0; i < n; i++) {
		cout << list[i];
		if (i < n - 1) {
			cout << " , ";
		}
	}
	cout << endl;
	return list;
}

void f_disp_descending(int* list, int n, int iter, int wall) {
	cout << iter << "th Iteration = ";
	for (int i = 0; i < n; i++) {
		cout << list[i];
		if (i == wall - 2) {
			cout << " ,|||";
		}
		if (i < n - 1) {
			cout << " , ";
		}
	}
	cout << endl;
}


int* f_sort_descending(int* list, int n) {
	int wall = n;
	int iter = 1;
	int ver = 2;
	for (int i = 0; i < n - 1; i++) {
		list = f_swap(list, wall, ver);
		f_disp_ascending(list, n, iter, wall);
		iter++;
		wall--;
	}
	cout << "The Final Sorted descending List = ";
	for (int i = 0; i < n; i++) {
		cout << list[i];
		if (i < n - 1) {
			cout << " , ";
		}
	}
	cout << endl;
	return list;
}


int main() {
	int* list = f_input();
	f_disp_list(list, n);
	int* asc_list = f_sort_ascending(list, n);
	int* desc_list = f_sort_descending(list, n);

	return 0;
}
