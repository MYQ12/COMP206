/* 
 Title: TMA1Question1.cpp
 Author: Mohammad Yehya Qureshi
*/

// Program Purpose: Open a file and count the whitespace-separated words in that file

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
