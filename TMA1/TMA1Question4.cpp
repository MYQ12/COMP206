/* 
 Title: TMA1Question4.cpp
 Author: Mohammad Yehya Qureshi
*/
 
/* Program Purpose: Create an array of 100 string objects. Fill the array by opening a text file and read one line of the file into each string 
		    until the array is filled. Display the array using the format “line #: <string>,” where # is the actual line number 
		    and <string> is the stored string.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	int counter = 0;
	string array[100];
	string lines;

	ifstream fin("TMA1Q4.txt");

	while(getline(fin, lines)){
		array[counter] = lines;
		counter++;
	}

	for(int i = 0; i < counter; i++){
		cout << "line " << i << ": " << array[i];
		cin.get();
	}

	fin.close();   
}///:~
