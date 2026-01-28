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