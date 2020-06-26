/* 
 Title: TMA3Question2.cpp
 Author: Mohammad Yehya Qureshi
*/

/*
 Program Purpose: Create a const whose value is determined at runtime by reading the time when the program starts.
		  In a separate function, have the program create two arrays of 10,000 doubles. 
		  Initialize the first array with sequential integral values starting with 100, and initialize the second array with the same numbers, but in reverse. 
		  Loop through both arrays using a single loop, and multiply the corresponding array elements from each array together and display the result. 
		  Read the time when the program completes the multiplication, and compute and display the elapsed time. 
		  Use an inline function to perform the calculation.
*/

#include <iostream>
#include <ctime>
using namespace std;

inline double multiply(double x, double y){
	return x * y;
}

void loop(){
	const int size = 10000;
	
	double incvalue = 100;
	double decvalue = 10099;
	double incarray[size];
	double decarray[size];
	
	for(int i = 0; i < size + 1; i++){
		incarray[i]= incvalue ;
		decarray[i] = decvalue;
	
		cout << multiply(incarray[i], decarray[i]) << endl;
	
		incvalue++;
		decvalue--;
	}
}

int main(){
	clock_t start_time,end_time;
	
	start_time = clock(); 
	loop();
	end_time = clock();

	double runtime = ((double) end_time - (double) start_time)/(double) CLOCKS_PER_SEC; 
	
	cout << "The elapsed time is: " << runtime << " seconds";
}///:~
