#include <iostream>
using namespace std;

int arr[100];
int temp[100];
int n;

void f_input() {
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void f_disp_input() {
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void f_disp_ascending() {
    cout << "Sorted array (Ascending): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void f_disp_descending() {
    cout << "Sorted array (Descending): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void f_swap(int index) {
    int t = arr[index];
    arr[index] = temp[index];
    temp[index] = t;
}

void f_sort_ascending() {
    for (int size = 1; size < n; size *= 2) {
        for (int start = 0; start < n; start += 2 * size) {
            int mid = start + size - 1;
            int end = start + 2 * size - 1;
            if (end >= n) end = n - 1;
            if (mid >= end) continue;

            int i = start;
            int j = mid + 1;
            int k = start;

            while (i <= mid && j <= end) {
                if (arr[i] <= arr[j]) {
                    temp[k++] = arr[i++];
                }
                else {
                    temp[k++] = arr[j++];
                }
            }
            while (i <= mid) temp[k++] = arr[i++];
            while (j <= end) temp[k++] = arr[j++];

            for (int p = start; p <= end; p++) {
                f_swap(p);
            }
        }
    }
}

void f_sort_descending() {
    for (int size = 1; size < n; size *= 2) {
        for (int start = 0; start < n; start += 2 * size) {
            int mid = start + size - 1;
            int end = start + 2 * size - 1;
            if (end >= n) end = n - 1;
            if (mid >= end) continue;

            int i = start;
            int j = mid + 1;
            int k = start;

            while (i <= mid && j <= end) {
                if (arr[i] >= arr[j]) {
                    temp[k++] = arr[i++];
                }
                else {
                    temp[k++] = arr[j++];
                }
            }
            while (i <= mid) temp[k++] = arr[i++];
            while (j <= end) temp[k++] = arr[j++];

            for (int p = start; p <= end; p++) {
                f_swap(p);
            }
        }
    }
}

int main4() {
    f_input();
    f_disp_input();
    f_sort_ascending();
    f_disp_ascending();
    f_sort_descending();
    f_disp_descending();
    return 0;
}