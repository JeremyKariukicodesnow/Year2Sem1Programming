#include<iostream>
using namespace std;

int elements;
int defaultEl = 12;
int arr[20];
int sorted_arr[20];
int great_equal_5=0 ;
int less_5=0;

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
		cout << arr[i] ;
		if (i != 0 || i < elements ) {
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
	}else if (less_5 > great_equal_5  ) {
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
		for (int j = 0; j < elements-1; j++) {
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
				cout << " , " ;
			}
		}
		cout << endl;
		i++;
	}while(i < 5);
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