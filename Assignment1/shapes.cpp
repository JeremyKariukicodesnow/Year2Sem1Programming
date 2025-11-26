#include <iostream>
using namespace std;

const double pie = 3.142; 

class Shape {
 public:
	 double r_length, r_width, s_length, s_width;
	 double b_length, b_width, b_height;
	 double c_radius, c_height;

	 //rectangle/square
	 double f_perimeter(double a, double b) {
		 double result = a + a + b + b;
		 return result;
	 }
	 double f_area(double a, double b) {
			 double result = a * b;
			 return result;
		 
	 }
	 double f_circumference(double a) {
		 a = a * 2 ;// diameter = radius * 2
		 double result = pie * a ;
		 return result;

	 }

	 //3d objects
	 // volume
	 double f_volume(int s ,double l, double w , double h) {
		 if (s == 3) {
			 double result = f_area(l, w) * h;
			 return result;
		 }
		 else {
			 double result =pie * f_area(l,l) * h;//did f_area(l,l) to square radius
			 return result;
		 }
	 }
	 //surface area
	 double f_surfacearea(int s, double l, double w, double h) {
		 if (s == 3) {
			 double result = f_area(l, w) + f_area(l, h) + f_area(w, h);
			 result = result * 2;
			 return result;
		 }
		 else {
			 double result1 = f_circumference(l) * h;
			 double result2 = f_area(l, l) * 2;//get area of circles
			 double result = result1 + result2;
			 return result;
		 }
	 }
};

//user functionality
int main() {
	Shape shapes;
	cout << "Kindly follow instructions and use doubles \n" << endl;
	cout << "Put in dimensions of the RECTANGLE or SQUARE\n>> Length = " << endl;
	cin >> shapes.r_length;
	cout << "\n Width = " << endl;
	cin >> shapes.r_width;
	cout << "\nPERIMETER of RECTANGLE/SQUARE length and width  " << shapes.r_length <<" " << shapes.r_width << "respectively is =  " << shapes.f_perimeter(shapes.r_length, shapes.r_width) << endl;
	cout << "\nAREA of RECTANGLE/SQUARE length and width  " << shapes.r_length << " " << shapes.r_width << "respectively is =  " << shapes.f_area(shapes.r_length, shapes.r_width) << endl;

	//box surafce area and volume
	cout << "\nPut in dimensions of the BOX to get VOLUME  and SURFACE AREA of the box\n>> Length = " << endl;
	cin >> shapes.b_length;
	cout << "\n Width = " << endl;
	cin >> shapes.b_width;
	cout << "\n Height = " << endl;
	cin >> shapes.b_height;
	cout << "\nVOLUME of BOX length and width and height  " << shapes.b_length << " " << shapes.b_width << " " << shapes.b_height << "respectively is =  " << shapes.f_volume(3,shapes.b_length, shapes.b_width,shapes.b_height) << endl;
	cout << "\nSURFACE AREA of BOX length and width and height  " << shapes.b_length << " " << shapes.b_width << " " << shapes.b_height << "respectively is =  " << shapes.f_surfacearea(3, shapes.b_length, shapes.b_width, shapes.b_height) << endl;

	//cylinder surface area and volume
	cout << "\nPut in dimensions of the CYLINDER to get VOLUME  and SURFACE AREA of the CYLINDER\n>> Length = " << endl;
	cin >> shapes.c_radius;
	cout << "\n Height = " << endl;
	cin >> shapes.c_height;
	cout << "\nVOLUME of CYLINDER length and height  " << shapes.c_radius << " " << shapes.c_height << "respectively is =  " << shapes.f_volume(1, shapes.c_radius, 1, shapes.c_height) << endl;
	cout << "\nSURFACE AREA of CYLINDER length and height  " << shapes.c_radius << " " << shapes.c_height << "respectively is =  " << shapes.f_surfacearea(1, shapes.c_radius, 1, shapes.c_height) << endl;
	return 0;
}