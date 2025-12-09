#include <iostream>
using namespace std;

class Fibo {
public:
    int n = 0;
    int* fib;
    int* ascending;
    int* descending;

    void f_inputs() {
        cout << "Kindly put number of values you want in fibonacci sequence >> ";
        cin >> n;
        if (n <= 0) {
            cout << "Please enter a positive number!" << endl;
            n = 0;
            return;
        }
        fib = new int[n];
        ascending = new int[n];
        descending = new int[n];
        if (n >= 1) fib[0] = 0;
        if (n >= 2) fib[1] = 1;
    }

    int f_fibo_gen(int i) {
        if (i == 0) return 0;
        if (i == 1) return 1;
        if (i >= n) return 0;

        if (i >= 2 && fib[i] == 0) {
            fib[i] = f_fibo_gen(i - 1) + f_fibo_gen(i - 2);
        }else if (i == n - 1) {
            for (int j = 0; j < n; j++) {
                ascending[j] = fib[j];
                descending[n - 1 - j] = fib[j];
            }
        }
        return fib[i];
    }

    void f_output_unsorted() {
        cout << "\nFibonacci Sequence in Ascending Order:" << endl;
        for (int i = 0; i < n; i++) {
            cout << *(ascending + i) << " ";
        }
        cout << endl;
    }

    void f_output_sorted() {
        cout << "\nFibonacci Sequence in Descending Order:" << endl;
        for (int i = 0; i < n; i++) {
            cout << *(descending + i) << " ";
        }
        cout << endl;
    }


};

int main() {
    Fibo fibonacci;

    fibonacci.f_inputs();
     fibonacci.f_fibo_gen(fibonacci.n - 1);

      fibonacci.f_output_unsorted();
      fibonacci.f_output_sorted();
    
   

    return 0;
}