/* 
 Title: TMA3Question3.cpp
 Author: Mohammad Yehya Qureshi
*/

/*
 DOCUMENTATION
 
 Program Purpose: Create a class hierarchy for simple geometry

 Compile: c++ -o TMA3Question3.exe TMA3Question3.cpp
 Execution: ./TMA3Question3.exe
 
 Classes: 
 	Point -  holds x and y values of a point
 	Shape - contains functions to calculate area and circumference of the shape, plus provide the coordinates of a rectangle that encloses the shape
 	Circle - contains default constructors and constructors whose arguments initialize the shapes appropriately
 	Square - contains default constructors and constructors whose arguments initialize the shapes appropriately
 	Triangle - contains default constructors and constructors whose arguments initialize the shapes appropriately

 Variables: None
*/

/*
 TEST PLAN

 Test case 1: Valid data run
 	Input: Point origin (0,0)
				 Circle circle (23,origin)
				 Square square (25, origin)
				 Triangle triangle (7, 12, 15, origin)
				 
	Output: Class: Circle
					Area: 1661.9 units squared
					Circumference: 144.513 units
					Bounding Box: (23, 23) (23, -23) (-23, 23) (-23, -23)
					
					Class: Square
					Area: 625 units squared
					Perimeter: 100 units
					Bounding Box: (12.5, 12.5) (12.5, -12.5) (-12.5, 12.5) (-12.5, -12.5)
					
					Class: Triangle
					Area: 41.2311 units squared
					Perimeter: 34 units
					Bounding Box: (9.28571, 11.7803) (9.28571, 0) (0, 11.7803) (0, 0)
 	
 Test case 2: Valid data run
 	Input: Point origin (1,-1);
				 Circle circle (23,origin)
				 Square square (25, origin)
				 Triangle triangle (15, 12, 7, origin)
				 
	Output: Class: Circle
					Area: 1661.9 units squared
					Circumference: 144.513 units
					Bounding Box: (24, 22) (24, -24) (-22, 22) (-22, -24)
					
					Class: Square
					Area: 625 units squared
					Perimeter: 100 units
					Bounding Box: (13.5, 11.5) (13.5, -13.5) (-11.5, 11.5) (-11.5, -13.5)
					
					Class: Triangle
					Area: 41.2311 units squared
					Perimeter: 34 units
					Bounding Box: (15, 4.49747) (15, -1) (1, 4.49747) (1, -1)
					
 Test case 3: Valid data run
 	Input: Point origin (1,-1);
				 Circle circle (23,origin)
				 Square square (25, origin)
				 Triangle triangle (10, 10, 10, origin)
				 
	Output: Class: Circle
					Area: 1661.9 units squared
					Circumference: 144.513 units
					Bounding Box: (24, 22) (24, -24) (-22, 22) (-22, -24)
					
					Class: Square
					Area: 625 units squared
					Perimeter: 100 units
					Bounding Box: (13.5, 11.5) (13.5, -13.5) (-11.5, 11.5) (-11.5, -13.5)
					
					Class: Triangle
					Area: 43.3013 units squared
					Perimeter: 30 units
					Bounding Box: (10, 8.66025) (10, 0) (0, 8.66025) (0, 0)

 Test case 3: Abnormal data run
 	Input: Point origin (0,0)
				 Circle circle (23,origin)
				 Square square (25, origin)
				 Triangle triangle (10, 20, 30, origin)
	
	Output: Class: Circle
					Area: 1661.9 units squared
					Circumference: 144.513 units
					Bounding Box: (23, 23) (23, -23) (-23, 23) (-23, -23)

					Class: Square
					Area: 625 units squared
					Perimeter: 100 units
					Bounding Box: (12.5, 12.5) (12.5, -12.5) (-12.5, 12.5) (-12.5, -12.5)

					Class: Triangle
					The inputted sides do not form a triangle!
					Bounding Box: (30, 0) (30, 0) (0, 0) (0, 0)
 
 Test case 5: Limit conditions run
 	Input:
 	Output: Class: Circle
					Area: 1661.9 units squared
					Circumference: 144.513 units
					Bounding Box: (23, 23) (23, -23) (-23, 23) (-23, -23)
					
					Class: Square
					Area: 625 units squared
					Perimeter: 100 units
					Bounding Box: (12.5, 12.5) (12.5, -12.5) (-12.5, 12.5) (-12.5, -12.5)
					
					Class: Triangle
					Area: 43.3013 units squared
					Perimeter: 30 units
					Bounding Box: (10, 8.66025) (10, 0) (0, 8.66025) (0, 0)
					
					Class: Circle
					Area: 12.5664 units squared
					Circumference: 12.5664 units
					Bounding Box: (2, 2) (2, -2) (-2, 2) (-2, -2)
					
					Class: Square
					Area: 25 units squared
					Perimeter: 20 units
					Bounding Box: (2.5, 2.5) (2.5, -2.5) (-2.5, 2.5) (-2.5, -2.5)
					
					Class: Triangle
					Area: 41.2311 units squared
					Perimeter: 34 units
					Bounding Box: (9.28571, 11.7803) (9.28571, 0) (0, 11.7803) (0, 0)
	
 Discussion: 
 	The program will accept both positive and negative values, however if the values inputted into the triangle do not form a triangle then there will be no
 	information on the perimeter or area due to the triangle not being feasible.
 	
 	The program accepts as many instances of each shape as long as the name of each instance is different.
 	
 	The program can theoretically accept any integer no matter how big it is.
 	
 	The circle and square are the easiest shapes to create and are designed so that they are always centred at whatever point is inputted into them.
 	Their bounding box is such that it is less of a rectangle and more so a square because of the design of a circle and square and how tightly the bounding box 
 	is surrounding the shapes which was not specified in the assignemnt therefore I assumed as tight as possible.
*/

#include "TMA3Question3.h"
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	Point origin (0,0);
	
	Circle circle (23,origin);
	Square square (25, origin);
	Triangle triangle (10, 20, 30, origin);
	
	circle.display();
	square.display();
	triangle.display();
}///:~