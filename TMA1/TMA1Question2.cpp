/* 
 Title: TMA1Question2.cpp
 Author: Mohammad Yehya Qureshi
*/

/* Program Purpose: Open a text file, and display the contents of that file one line at a time. After a line has been displayed, the program should wait for the user to press 
		    a key before displaying the next line in the file.
*/ 

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ifstream fin("TMA1Q2.txt");
	string lines;
    
	while (getline(fin, lines)){
		cout << lines << endl; 
		cout << "Press the ENTER key to continue" << endl;
		cin.get();
	}
	
	fin.close();   
} ///:~
