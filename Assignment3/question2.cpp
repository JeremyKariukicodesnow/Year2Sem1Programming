#include <iostream>
using namespace std;

double f_iterative(double x, int n) {
    double result = 1;
    for (int i = 1; i <= n; i++) {
        result = result * x;
    }
    return result;
}

double f_recursive(double x, int n) {
    if (n == 0) return 1;
    if (n == 1) return x;
    return x * f_recursive(x, n - 1);
}

int main() {
    double x;
    int n;

    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter value of n: ";
    cin >> n;

    if (n < 0) {
        cout << "n should be positive" << endl;
    }
    else {
        double result1 = f_iterative(x, n);
        double result2 = f_recursive(x, n);

        cout << x << "^" << n << " (Iterative) = " << result1 << endl;
        cout << x << "^" << n << " (Recursive) = " << result2 << endl;
    }

    return 0;
}