JEREMY MWANGI KARIUKI
J174/1249/2024
29/01/2026
KENYATTA UNIVERSITY
SCHOOL OF ENGINEERING AND TECHNOLOGY
DEPARTMENT OF ELECTRICAL AND ELECTRONICS ENGINEERING
EEE 202: COMPUTER PROGRAMMING II
JEREMY MWANGI KARIUKI
J174/1249/2024
29/01/2026

LAB EXERCISE V
a) Create a class shape that consists of member variables such as length, breadth, height and radius. The
class should consist of member functions such as setLength(), setBreadth(), setHeight(), and setRadius().
Derive classes such as box, triangle, circle, cylinder, and square from the class shape. Create member
functions such as getVolume(), getArea(), getSurfaceArea(), getCircumference(), and getPerimeter() for
each of the derived classes, where applicable.
For each of the derived classes create at least two objects and, where applicable, compute their area,
surface area, perimeter, circumference, and volume.
Using operator overloading create a rectangle whose dimensions are equal to the sum of the respective
dimensions of the two objects of type square. Compute the circumference and area of the rectangle.

ANSWER:
#include <iostream>
#include <math.h>
using namespace std;

class Shape {
public:
	double length;
	double breadth;
	double height;
	double radius;
	double pi = 3.142857;

	void setLength(double len);
	void setBreadth(double brd);
	void setHeight(double hgt);
	void setRadius(double rad);

};

void Shape::setLength(double len){
	length = len;
}
void Shape::setBreadth(double brd) {
	breadth=brd;
}
void Shape::setHeight(double hgt) {
	height = hgt;
}
void Shape::setRadius(double rad) {
	radius = rad;
}

class Box : public Shape {
public:
	Box(double len, double brd, double hgt) {
		setLength(len);
		setBreadth(brd);
		setHeight(hgt);
	}
	double getVolume() {
		double volume;
		volume = length * breadth * height;
		return volume;
	}
	double getSurfaceArea() {
		double surfaceArea=length*breadth;
		surfaceArea += breadth * height;
		surfaceArea += height * length;
		surfaceArea = surfaceArea * 2;
		return surfaceArea;
	}
};

class Cylinder:public Shape {
public:
	Cylinder(double rad,double hgt) {
		setRadius(rad);
		setHeight(hgt);
	}
	double getVolume() {
		double volume;
		volume = pi * radius * radius * height;
		return volume;
	}
	double getSurfaceArea() {
		double surfaceArea = pi * radius * radius;
		surfaceArea *= 2;
		double curvature= pi* (radius + radius);
		curvature *= height;
		surfaceArea += curvature;
		return surfaceArea;
	}
};

class Circle:public Shape {
public:
	Circle(double rad) {
		setRadius(rad);
	}
	double getArea() {
		double area;
		area = pi * radius * radius ;
		return area;
	}
	double getPerimeter() {
		double perimeter = pi * (radius + radius);
		return perimeter;
	}
};

class Triangle:public Shape {
public:
	Triangle(double len, double hgt) {
		setLength(len);//base length
		setHeight(hgt);
	}
	double getArea() {
		double area;
		area = 0.5 * length * height;
		return area;
	}
	double getPerimeter() {
		double perimeter;
		double hypotenuse = (length * length) + (height * height);
		hypotenuse = sqrt(hypotenuse);
		perimeter = length + height + hypotenuse;
		return perimeter;
	}
};

class Square:public Shape {
public:
	Square(double len, double brd) {
		setLength(len);
		setBreadth(brd);
	}
	double getArea() {
		double area;
		area = length * breadth;
		return area;
	}
	double getPerimeter() {
		double perimeter;
		perimeter = length + breadth;
		perimeter *= 2;
		return perimeter;
	}
};

class Rectangle : public Shape {
public:
	Rectangle(double len, double brd) {
		setLength(len);
		setBreadth(brd);
	}
	double getArea() {
		return length * breadth;
	}
	double getPerimeter() {
		return 2 * (length + breadth);
	}
};
Rectangle operator+(Square s1, Square s2) {
	double newLength = s1.length + s2.length;
	double newBreadth = s1.breadth + s2.breadth;
	return Rectangle(newLength, newBreadth);
}

int main1() {
	cout << "Box functionality" << endl;
	Box box1(3.5, 2.0, 4.0);
	cout << "\n Box 1 \nLength: " << box1.length << "Breadth: " << box1.breadth << "Height: " << box1.height<< endl;
	cout << "Volume: " << box1.getVolume() << endl;
	cout << "Surface Area: " << box1.getSurfaceArea() << endl;
	Box box2(5.4, 2.9, 8.0);
	cout << "\nBox 2\n  Length: " << box2.length << "Breadth: " << box2.breadth << "Height: " << box2.height << endl;
	cout << "Volume: " << box2.getVolume() << endl;
	cout << "Surface Area: " << box2.getSurfaceArea() << endl;

	cout << "\n Cylinder Functionality" << endl;
	Cylinder cylinder1(3.5, 2.0);
	cout << "\nCylinder 1\n  Radius: " << cylinder1.radius << "Height: " << cylinder1.height << endl;
	cout << "Volume: " << cylinder1.getVolume() << endl;
	cout << "Surface Area: " << cylinder1.getSurfaceArea() << endl;
	Cylinder cylinder2(5.5, 3.0);
	cout << "\nCylinder 2\n  Radius: " << cylinder2.radius << "Height: " << cylinder2.height << endl;
	cout << "Volume: " << cylinder2.getVolume() << endl;
	cout << "Surface Area: " << cylinder2.getSurfaceArea() << endl;

	cout << "\n Circle Functionality" << endl;
	Circle circle1(7.0);
	cout << "\nCircle 1\n  Radius: " << circle1.radius << endl;
	cout << "Circumference: " << circle1.getPerimeter() << endl;
	cout << "Area: " << circle1.getArea() << endl;
	Circle circle2(14.0);
	cout << "\nCircle 2\n  Radius: " << circle2.radius << endl;
	cout << "Circumference: " << circle2.getPerimeter() << endl;
	cout << "Area: " << circle2.getArea() << endl;

	cout << "\n Triangle Functionality" << endl;
	Triangle triangle1(2.0,4.0);
	cout << "\nTriangle 1\n  Length: " << triangle1.length<< "Height : "<< triangle1.height<< endl;
	cout << "Perimeter: " << triangle1.getPerimeter() << endl;
	cout << "Area: " << triangle1.getArea() << endl;
	Triangle triangle2(2.0, 4.0);
	cout << "\nTriangle 2\n  Length: " << triangle2.length << "Height : " << triangle2.height << endl;
	cout << "Perimeter: " << triangle2.getPerimeter() << endl;
	cout << "Area: " << triangle2.getArea() << endl;

	cout << "\n Square Functionality" << endl;
	Square square1(4.0, 4.0);
	cout << "\nSquare 1\n  Length: " << square1.length << "Breadth : " << square1.breadth << endl;
	cout << "Perimeter: " << square1.getPerimeter() << endl;
	cout << "Area: " << square1.getArea() << endl;
	Square square2(5.0, 5.0);
	cout << "\nSquare 2\n  Length: " << square2.length << "Breadth : " << square2.breadth << endl;
	cout << "Perimeter: " << square2.getPerimeter() << endl;
	cout << "Area: " << square2.getArea() << endl;

	Rectangle rect = square1 + square2;
	cout << "\n Rectangle from addition of two squares\n  Length: " << rect.length << "Breadth : " << rect.breadth << endl;
	cout << "Perimeter: " << rect.getPerimeter() << endl;
	cout << "Area: " << rect.getArea() << endl;

	return 0;
}

LAB EXERCISE VI
QUESTION 1
a) Write a C++ program which opens a file named studreg.txt in reading and writing modes. The program
should allow the user to first carry out system registration by inputting a username and password, both
of which, should be written to the studreg.txt file. The program then asks the user to login to the system
by entering his/her login details (username and password) which are then compared with the ones input
during registration. The program informs the user whether the login is successful (both usernames and
passwords match) or unsuccessful (due to either incorrect username or incorrect password). Note that
only registration details should be written to the file. Also, the program should read the username and
password from the file and compare them with the login inputs.

ANSWER:
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main2() {
	string fileName = "studreg.txt";
	fstream file(fileName, ios::in | ios::out | ios::app);
	string userName;
	string password;
	cout << "Register by entering the following details;" << endl;
	cout << "Enter username: " << endl;
	cin >> userName;
	cout << "Enter password: " << endl;
	cin >> password;
	file << userName << endl;
	file << password << endl;
	userName=" ";
	password = " ";
	cout << "Login to the system by entering the following details;" << endl;
	cout << "Enter username: " << endl;
	cin >> userName;
	cout << "Enter password: " << endl;
	cin >> password;
	string lineUser;
	string linePassword;
	bool detailsTrue = false;
	string loginVerdict;
	file.seekg(0);
	while(getline(file,lineUser) && getline(file,linePassword)){
		if(userName == lineUser && password==linePassword){
			loginVerdict = "Login Successful";
			detailsTrue = true;
			break;
		}
		else if(userName != lineUser){
			detailsTrue = false;
			loginVerdict = "incorrect username";
		}
		else if (password != linePassword) {
			detailsTrue = false;
			loginVerdict = "incorrect Password ";
		}
	}
		while(getline(file,lineUser) && getline(file,linePassword)){
		if(userName != lineUser && password!=linePassword){
			loginVerdict = "both username and password are not correct";
			detailsTrue = false;
			break;
		}
	}
	cout << "You registered with the following details" << endl;
	string line;
	int num = 0;
	file.clear();
	file.seekg(0);
	while (getline(file, lineUser) && getline(file, linePassword)) {
		cout << "  Username: " << lineUser << endl;
		cout << "  Password: " << linePassword << endl;
	}

	cout << "You attempted to login with the following details;" << endl;
	cout << "  Username: " << userName << endl;
	cout << "  Password: " << password << endl;

	if(detailsTrue) {
		cout << loginVerdict << endl;
	}
	else {
		cout << "Unsuccessful Login" << endl;
		cout <<"  " << loginVerdict << endl;
	}
	
	return 0;
}

QUESTION 2
b) A company employee is described as having a name, sex, age, an employer, employee number, grade,
number of children, salary, etc. Write a C++ program for the structure employee. The program should
consist of at least two employees of the structure employee. Your program should assign data to each of
the employees and display the data.

ANSWER:
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

LAB EXERCISE VII

QUESTION 1
a) Write a Python program to carry out addition, division, subtraction, multiplication and average of two numbers.
The program should give the following sample output;
The sum of <nam1> + <nam2> = <sum>
The difference of <nam1> - <nam2> = <diff>
The product of <nam1> * <nam2> = <prod>
The result of <nam1> / <nam2> = <quo> remainder <rem>
The average of <nam1> and <nam2> = <sum>/2 = <avg>
Example: If nam1 = 5 and nam2 = 4 then the output for the sum should be 5 + 4 = 9, that is, only values of
variables should be included in the above outputs.
Note that all identifiers in <xxxx> such as nam1, nam2, sum, diff, prod, quo, rem, and avg are variables.

ANSWER:

nam1=int(input("Kindly input number 1>>> "))
nam2=int(input("Kindly input number 2>>> "))
print(f"Number 1 is {nam1}")
print(f"Number 2 is {nam2}")
sum = nam1 + nam2
difference = nam1 - nam2
product = nam1 * nam2
quotient = nam1 // nam2 #use // to ensure exact whole number
remainder = nam1 % nam2
average = sum / 2
print(f"The sum of : {nam1} + {nam2} = {sum}")
print(f"The difference of : {nam1} - {nam2} = {difference}")
print(f"The result of : {nam1} / {nam2} = {quotient} remainder {remainder}")
print(f"The average of : {nam1} and {nam2} = {average}")

QUESTION 2:
b) Write a Python program that reads THREE numbers, finds the smallest of the FOUR numbers, and prints the
value of the smallest number on the screen.
Sample output assuming the FOUR numbers are 30, 20, 40, and 10.
You Entered 30, 20, 40, 10
The smallest number is: 10

ANSWER:

num1 = int(input("Enter number 1>>>  "))
num2 = int(input("Enter number 2>>>  "))
num3 = int(input("Enter number 3>>>  "))
num4 = int(input("Enter number 4>>>  "))

if num1 <= num2 and num1 <= num3 and num1 <= num4:
    smallest = num1
elif num2 <= num1 and num2 <= num3 and num2 <= num4:
    smallest = num2
elif num3 <= num1 and num3 <= num2 and num3 <= num4:
    smallest = num3
else:
    smallest = num4

print(f"You Entered {num1} , {num2} , {num3} , {num4}")
print(f"The smallest number is {smallest}")


QUESTION 3:
c) Write a Python program to find the sum, average, smallest, and the largest of any three numbers (marks) input
by the user. The program should also assign a grade to the average of the three marks based on the following
guidelines:
Above or equals 70 marks: A
Between 60 and 69 marks: B
Between 50 and 59 marks: C
Between 40 and 49 marks: D
Page 2 of 2
Less than 40: E
The program should not grade an input of more than 100 or less than 0 marks. The message “Invalid Marks”
should be displayed to the user in case of any such entries. Strictly use the Match-Case Statement in writing the
code for grading.

ANSWER:
mark1 = int(input("Enter mark 1: "))
mark2 = int(input("Enter mark 2: "))
mark3 = int(input("Enter mark 3: "))

if mark1 < 0 or mark1 > 100 or mark2 < 0 or mark2 > 100 or mark3 < 0 or mark3 > 100:
    print("Invalid Marks")
else:
    print(f"\nMarks Entered: {mark1}, {mark2}, {mark3}")

    if mark1 >= mark2 and mark1 >= mark3:
        highest = mark1
    elif mark2 >= mark1 and mark2 >= mark3:
        highest = mark2
    else:
        highest = mark3

    if mark1 <= mark2 and mark1 <= mark3:
        lowest = mark1
    elif mark2 <= mark1 and mark2 <= mark3:
        lowest = mark2
    else:
        lowest = mark3

    total = mark1 + mark2 + mark3
    average = total / 3

    print(f"Highest Score: {highest}")
    print(f"Lowest Score: {lowest}")
    print(f"Average Score: ({mark1} + {mark2} + {mark3}) / 3 = {total}/3 = {average:.2f}")

    match True:
        case _ if average >= 70:
            grade = "A"
        case _ if 60 <= average < 70:
            grade = "B"
        case _ if 50 <= average < 60:
            grade = "C"
        case _ if 40 <= average < 50:
            grade = "D"
        case _ if average < 40:
            grade = "E"

    print(f"Grade for Average Score ({average:.2f}): {grade}")
