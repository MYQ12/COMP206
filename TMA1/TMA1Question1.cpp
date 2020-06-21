/* 
 Title: TMA1Question1.cpp
 Author: Mohammad Yehya Qureshi
*/

/*
 DOCUMENTATION
 
 Program Purpose: Open a file and count the whitespace-separated words in that file

 Compile: c++ -o TMA1Question1.exe TMA1Question1.cpp
 Execution: ./TMA1Question1.exe
 
 Classes: none

 Variables:
 	fin - ifstream - used to open the file for reading
 	word - string - used to store the contents of the file one word at a time
 	counter - int - used to store the total number of whitespace - seperated words as an integer number
*/

/*
 TEST PLAN
 
 Test case 1: Valid data run
 	Input: Hello my name is Yehya. I am 18 year sold.
 	Output: Number of whitespace-seperated words:10
 
 Test case 2: Valid data run
 	Input: Hello my name is Yehya. I am 18 yearsold.
 	Output: Number of whitespace-seperated words:9
 	
 Test case 3: Valid data run
 	Input: S c I piO 1 2.0 345 ^&* 
 	Output: Number of whitespace-seperated words:8
 
 Test case 4: Abnormal data run
 	Input: File not found 
 	Output: Number of whitespace-seperated words:0
 
 Test case 5: Limit conditions run
 	Input: File is empty
 	Output: Number of whitespace-seperated words:0
 		
 Discussion:
 	The program will count how many whitespace-seperated words are in the file no matter the size of the file or how long a word is.
 	The program allows integers, floating point numbers, characters, nonsense, and special characters as legitimate inputs.
 	The program will default to a count of 0 if the the file cannot be found or is empty.
 
*/

#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("TMA1Q1.cpp");
    string word;
    int counter = 0;
    
    while (fin >> word)
        counter++;

	cout << "Number of whitespace-seperated words: " << counter << endl;
	
	fin.close();
}///:~