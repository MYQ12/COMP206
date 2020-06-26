/* 
 Title: TMA3Question3.cpp
 Author: Mohammad Yehya Qureshi
*/

// Program Purpose: Create a class hierarchy for simple geometry

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
