/* 
 Title: TMA2Question2.cpp
 Author: Mohammad Yehya Qureshi
*/

/*
 DOCUMENTATION
 
 Program Purpose: Create a Hen class. Inside this class, nest a Nest class. Inside Nest, place an Egg class. 
				  Each class should have a display() member function. For each class, create a constructor and a destructor 
				  that prints an appropriate message when it is called. In main(), create an instance of each class using new and call the display() function 
				  for each one. After calling display(), free the storage using delete.

 Compile: c++ -o TMA2Question2.exe TMA2Question2.cpp
 Execution: ./TMA2Question2.exe
 
 Classes: 
 	Hen - consists of a constructor, a destructor, and a display function
 	Nest - consists of a constructor, a destructor, and a display function
 	Egg - consists of a constructor, a destructor, and a display function

 Variables: None
*/

/*
 TEST PLAN
 	Normal Output:
		A new hen has been created!
		The hen has created a new nest!
		The hen has layed a new egg!
		
		This is what a Hen looks like:
		                  MM
		                 / .|_
		                /(_)_< --- cack cack!
		               /  (
		       (____.-     )
		        \         /
		         \ -.-.-`/
		          \_____/
		           _|_\_
		     ---------------
		
		This is how a hen sits in it's nest:
		                       (\(\)
		      ,_               ;  o >
		        {`-.          /  (_)
		         ={\`-._____/`   |
		          -{ /    -=`\   |
		        .=`={  -= = _/   /`-.
		      (=======================)
		       \=====================/
		        \===================/
		         \=================/
		          \===============/
		           `-------------
		
		This is how a hen lays an egg:
		  MM
		 <o \___/|
		  \_  _/ O
		     ][
		
		The Hen has died!
		The nest has been destroyed!
		The egg has been destroyed and a new chick is born!
		
 Discussion: No test available for a program that does not have any inputs.
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