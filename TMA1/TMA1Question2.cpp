/* 
 Title: TMA1Question2.cpp
 Author: Mohammad Yehya Qureshi
*/

/*
 DOCUMENTATION
 
 Program Purpose: Open a text file, and display the contents of that file one line at a time. After a line has been displayed, 
 				  the program should wait for the user to press a key before displaying the next line in the file.

 Compile: c++ -o TMA1Question2.exe TMA1Question2.cpp
 Execution: ./TMA1Question2.exe
 
 Classes: none

 Variables:
 	fin - ifstream - used to open the file for reading
 	lines - string - used to store the contents of the file one line at a time
*/

/*
 TEST PLAN
 
 Test case 1: Valid data run
 	Input:	Hello my name is Mohammad Yehya Qureshi.
 		I am 18 years old.
 			
 			
 	Output: Hello my name is Mohammad Yehya Qureshi.
		Press the ENTER key to continue

		I am 18 years old.
		Press the ENTER key to continue

 
 Test case 2: Valid data run
 	Input: Hello my name is Mohammad Yehya Qureshi. I am 18 years old.
 	Output: Hello my name is Mohammad Yehya Qureshi. I am 18 years old.
		Press the ENTER key to continue
				
 Test case 3: Valid data run
 	Input: 1
	       2
	       3
	       4
	       5
 		    
 	Output: 1
		Press the ENTER key to continue
		
		2
		Press the ENTER key to continue
		
		3
		Press the ENTER key to continue
		
		4
		Press the ENTER key to continue
		
		5
		Press the ENTER key to continue

 
 Test case 4: Abnormal data run
 	Input: File not found 
 	Output: $
 
 Test case 5: Limit conditions run
 	Input: File is empty
 	Output: $
 		
 Discussion:
 	The program accepts single words, numbers, or integers to full sentences.
 	The program will default to a blank console if the the file cannot be found or is empty.
 	The program only works if you press the ENTER KEY.
 
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
