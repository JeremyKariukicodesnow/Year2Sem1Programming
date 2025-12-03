#include <iostream>
using namespace std;

const double PI = 3.14159;

class Shape {
    double s_side = 0;
    double r_length = 0, r_width = 0;
    double b_length = 0, b_width = 0, b_height = 0;
    double c_diameter = 0, c_height = 0;

public:
    void input(char choice) {
        if (choice == 's') {
            cout << "Enter square side>> "<<endl;
            cin >> s_side;
        }
        else if (choice == 'r') {
            cout << "Enter rectangle length>> "<<endl;
            cin >> r_length;
            cout << "Enter rectangle width>> "<<endl;
            cin >> r_width;
        }
        else if (choice == 'b') {
            cout << "Enter box length>>  "<<endl;
            cin >> b_length;
            cout << "Enter box width>> "<<endl;
            cin >> b_width;
            cout << "Enter box height>> "<<endl;
            cin >> b_height;
        }
        else if (choice == 'c' ) {
            cout << "Enter cylinder diameter>> "<<endl;
            cin >> c_diameter;
            cout << "Enter cylinder height>> "<<endl;
            cin >> c_height;
        }
    }

    double f_circumference(char choice) {
        if (choice == 'c' || choice == 'C') {
            return PI * c_diameter;
        }
    }

    double f_perimeter(char choice) {
        if (choice == 's') {
            return 4 * s_side;
        }else if (choice == 'r') {
            return 2 * (r_length + r_width);
        }
    }

    double f_area(char choice) {
        if (choice == 's') {
            return s_side * s_side;
        }
        else if (choice == 'r') {
            return r_length * r_width;
        }else if (choice == 'c' ) {
            double r = c_diameter / 2.0;
            return PI * r * r;
        }
    }
    double f_surface_area(char choice) {
        if (choice == 'b' ) {
            return 2 * (b_length * b_width + b_length * b_height + b_width * b_height);
        }else if (choice == 'c' ) {
            double r = c_diameter / 2.0;
            return 2 * PI * r * (r + c_height);
        }
    }

    double f_volume(char choice) {
        if (choice == 'b') {
            return b_length * b_width * b_height;
        }else if (choice == 'c' || choice == 'C') {
            double r = c_diameter / 2.0;
            return PI * r * r * c_height;
        }
    }
};

int main() {
    Shape shape;

    shape.input('r');
    cout << "Rectangle" << endl;
    cout << "Area       : " << shape.f_area('r') << endl;
    cout << "Perimeter  : " << shape.f_perimeter('r') << endl;

    shape.input('s');
    cout << "Square" << endl;
    cout << "Area       : " << shape.f_area('s') << endl;
    cout << "Perimeter  : " << shape.f_perimeter('s') << endl;

    shape.input('b');
    cout << "Box" << endl;
    cout << "Volume        : " << shape.f_volume('b') << endl;
    cout << "Surface Area  : " << shape.f_surface_area('b') << endl;


    shape.input('c');
    cout << "Cylinder" << endl;
    cout << "Base Area     : " << shape.f_area('c') << endl;
    cout << "Circumference : " << shape.f_circumference('c') << endl;
    cout << "Volume        : " << shape.f_volume('c') << endl;
    cout << "Surface Area  : " << shape.f_surface_area('c') << endl;

    return 0;
}