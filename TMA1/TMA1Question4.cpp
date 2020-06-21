/* 
 Title: TMA1Question4.cpp
 Author: Mohammad Yehya Qureshi
*/

/*
 DOCUMENTATION
 
 Program Purpose: Create an array of 100 string objects. Fill the array by opening a text file and read one line of the file into each string 
 				  until the array is filled. Display the array using the format “line #: <string>,” where # is the actual line number 
 				  and <string> is the stored string.

 Compile: c++ -o TMA1Question4.exe TMA1Question4.cpp
 Execution: ./TMA1Question4.exe
 
 Classes: none

 Variables:
 	counter - int - used to store the total number of indexes filled in the array
 	array - string - used to store the contents of the file
 	lines - string - used to store the contents of the file one line at a time
 	fin - ifstream - used to open the file for reading
*/

/*
 TEST PLAN
 
 Test case 1: Valid data run
 	Input:  one	
			two	
			three	
			 .
			 .
			 .
			ninety-eight	
			ninety-nine	
			one hundred
			
 	
	Output: line 0: one
			line 1: two
			line 2: three
				.
				.
				.
			line 97: ninety-eight
			line 98: ninety-nine
			line 99: one hundred

 Test case 2: Valid data run
 	Input: one
		   two
		   three
			.
			.
			.
		   forty-eight
		   forty-nine
		   fifty

 	Output: line 0: one
			line 1: two
			line 2: three
				.
				.
				.
			line 47: forty-eight
			line 48: forty-nine
			line 49: fifty
 	
 Test case 3: Valid data run
 	Input: one two
		   three four
		   five six
				.
				.
				.
		   twenty-one twenty-two
		   twenty-three twenty-four
		   twenty-five twenty-six
 	
	Output: line 0: one two
			line 1: three four
			line 2: five six
					.
					.
					.
			line 10: twenty-one twenty-two
			line 11: twenty-three twenty-four
			line 12: twenty-five twenty-six

 
 Test case 4: Abnormal data run
 	Input: File not found 
 	Output: Blank
 
 Test case 5: Limit conditions run
 	Input: More than 100 strings
 	Output: Aborted (core dumped)
 		
 Discussion:
 	The program accepts any number of strings as long as the number of strings is not more than 100.
 	The program will will not produce an output if the file cannot be found. 
 	The length of the string is irrelevant to the program's performance wether it is a one long word or words seperated by white-space.
 	The program's design is intended to utilize the ENTER key to display each line one at a time rather than all lines at the same time. 
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