/* 
 Title: TMA2Question2.cpp
 Author: Mohammad Yehya Qureshi
*/

/*
Program Purpose: Create a Hen class. Inside this class, nest a Nest class. Inside Nest, place an Egg class. 
		 Each class should have a display() member function. For each class, create a constructor and a destructor 
		 that prints an appropriate message when it is called. In main(), create an instance of each class using new and call the display() function 
		 for each one. After calling display(), free the storage using delete.
*/

#include "TMA2Question2.h"
#include <iostream>
using namespace std;

int main() {
	Hen *hen = new Hen();
	Hen::Nest *nest = new Hen::Nest();
	Hen::Nest::Egg *egg = new Hen::Nest::Egg();

	hen -> display();
	nest -> display();
	egg -> display();

	delete hen;
	delete nest;
	delete egg;
}///:~
