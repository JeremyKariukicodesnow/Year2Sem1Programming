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
		if (i != 0 || i < n-1) {
			cout << " , ";
		}
	}
	cout << endl;
}

int* f_swap(int* list,int wall,int ver) {
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

void f_disp_ascending(int* list, int n,int iter,int wall){
	cout << iter << "th Iteration = ";
	for (int i = 0; i < n; i++) {
		cout << list[i];
		if (i == wall-2){
			cout << " ,|||";
			}
		if ( i < n - 1) {
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
			list =f_swap(list, wall,ver);
			f_disp_ascending( list, n, iter,wall);
			iter++;
			wall--;
	}
	cout <<  "The Final Sorted ascending List = ";
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
		list = f_swap(list, wall,ver);
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
	f_disp_list(list,n);
	int* asc_list = f_sort_ascending(list, n);
	int* desc_list = f_sort_descending(list, n);

	return 0;
}