/* 
 Title: TMA2Question2.cpp
 Author: Mohammad Yehya Qureshi
*/

/* 
 Program Purpose: Create a Text class that contains a string object to hold the text of a file. 
		  Give it two constructors: a default constructor and a constructor that takes a string argument that is the name of the file to open. 
		  When the second constructor is used, open the file and read the contents of the file into the string member object. 
		  Add a member function contents() to return the string so that you can display it. 
		  In main(), open a file using Text and display the contents.
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
