#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    string sex;
    int age;
    string employer;
    string employeeNumber;
    int grade;
    int numberOfChildren;
    double salary;
};

int main3() {
    const int numEmployees = 2; 
    Employee employees[numEmployees];
    for (int i = 0; i < numEmployees; i++) {
        cout << "\nEnter details for the employee " << i + 1 << endl;
        cout << "Name: ";
		cin >> employees[i].name;
        cout << "Sex";
        cin >> employees[i].sex;
        cout << "Age: ";
        cin >> employees[i].age;
        cout << "Employer: ";
		cin >> employees[i].employer;
        cout << "Employee Number: ";
		cin >> employees[i].employeeNumber;
        cout << "Grade: ";
        cin >> employees[i].grade;
        cout << "Number of Children: ";
        cin >> employees[i].numberOfChildren;
        cout << "Salary: ";
        cin >> employees[i].salary;
        cout << endl;
    }

    cout << "Displaying the employees"<<endl;
    for (int i = 0; i < numEmployees; i++) {
        cout << "Employee " << i + 1 << " DetailS;" << endl;
        cout << "Name: " << employees[i].name << endl;
        cout << "Sex: " << employees[i].sex << endl;
        cout << "Age: " << employees[i].age << endl;
        cout << "Employer: " << employees[i].employer << endl;
        cout << "Employee Number: " << employees[i].employeeNumber << endl;
        cout << "Grade: " << employees[i].grade << endl;
        cout << "Number of Children: " << employees[i].numberOfChildren << endl;
        cout << "Salary: " << employees[i].salary << endl;
    }

    return 0;
}
