/* 
 Title: TMA2Question2.cpp
 Author: Mohammad Yehya Qureshi
*/
 
/* Program Purpose: Create an abstract data type that represents a DVD in a dvd rental store. 
		    Consider all the data and operations that may be necessary for the DVD type to work well within a rental management system. 
		    Include a print() member function that displays all the information about the DVD. 
		    Test the class by creating an array of ten DVD instances and filling them using information 
		    read from a test input file that you create. Display the DVD information.
*/

#include "TMA2Question1.h"
#include <iostream>
#include <fstream>
using namespace std;

int main(){   
	DVD array[10];

	ifstream fin("TMA2Q1.txt");    

	for(int i = 0; i < 10; i++)
		array[i].Read(fin);        

	for(int i = 0; i < 10; i++)   
		array[i].Print();

	fin.close();
}///:~
