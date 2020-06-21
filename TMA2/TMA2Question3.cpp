/* 
 Title: TMA2Question2.cpp
 Author: Mohammad Yehya Qureshi
*/

/*
 DOCUMENTATION
 
 Program Purpose: Create a Text class that contains a string object to hold the text of a file. 
 				  Give it two constructors: a default constructor and a constructor that takes a string argument that is the name of the file to open. 
 				  When the second constructor is used, open the file and read the contents of the file into the string member object. 
 				  Add a member function contents() to return the string so that you can display it. 
 				  In main(), open a file using Text and display the contents.

 Compile: c++ -o TMA2Question3.exe TMA2Question3.cpp
 Execution: ./TMA2Question3.exe
 
 Classes: 
 	Text - contains 2 constructors (a defualt constructor and data constructor), a destructor, and a contents member function.

 Variables: None	
*/

/*
 TEST PLAN
 
 Test case 1: Valid data run
 	Input: Hello! My name is Mohammad Yehya Qureshi and I am learning C++!

	Output: Hello! My name is Mohammad Yehya Qureshi and I am learning C++!

 Test case 2: Valid data run
 	Input: Hello! My name is Mohammad Yehya Qureshi and I am learning C++!
		   I am currently enrolled in the COMP206 course at AthabascaU.
		   
	Output: Hello! My name is Mohammad Yehya Qureshi and I am learning C++!
			I am currently enrolled in the COMP206 course at AthabascaU.
 	
 Test case 3: Valid data run
 	Input:	S c I piO 1 2.0 345 ^&*
 	
	Output: S c I piO 1 2.0 345 ^&*

 Test case 4: Abnormal data run
 	Input: File not found 
 	Output: Blank
 
 Test case 5: Limit conditions run
 	Input: Empty file
 	Output: Blank
		
 Discussion: 
 	The file can contain as many lines of text as possible, no matter the length.
 	The program allows integers, floating point numbers, characters, nonsense, and special characters as legitimate inputs.
 	The program will not output anything if the the file cannot be found or is empty.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Text{

private:
    string text;

public:
    Text() {}
    
    ~Text() {}
    
    string contents() const{
        return text;
     }
     
     Text(string file){
	     string lines;
	
	     ifstream fin(file);
	
	     while (getline(fin, lines))
	     	text += lines + '\n';
     }
};

int main(){
	cout << Text("TMA2Q3.txt").contents() << endl;
}