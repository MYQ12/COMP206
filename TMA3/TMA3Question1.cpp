/* 
 Title: TMA3Question1.cpp
 Author: Mohammad Yehya Qureshi
*/

/*
 DOCUMENTATION
 
 Program Purpose: Create a const whose value is determined at runtime by reading the time when the program starts.
 								  In a separate function, have the program create two arrays of 10,000 doubles. 
 								 	Initialize the first array with sequential integral values starting with 100, and initialize the second array with the same numbers, but in reverse. 
 									Loop through both arrays using a single loop, and multiply the corresponding array elements from each array together and display the result. 
 									Read the time when the program completes the multiplication, and compute and display the elapsed time. 
 									Do not use inline functions in this program.

 Compile: c++ -o TMA3Question1.exe TMA3Question1.cpp
 Execution: ./TMA3Question1.exe
 
 Classes: None

 Variables: 
 	int - size - maximum number of doubles outlined in the question
 	double - incvalue - the variable that will be used to proivide data to the array that is incrementing
 	double - decvalue - the variable that will be used to proivide data to the array that is deccrementing
 	double - incarray - the array that contains incrementing values
 	double - decarray - the array that contains deccrementing values
 	double - result - the product of the corresponding array elements from each array
 	clock_t - start_time - starts the count when the loop begins
 	clock_t - end_time - ends the count when the loop ends
 	double - runtime - the total elasped time of the program
*/

/*
 TEST PLAN
 
 Test case 1: Valid data run
 	Input: for(int i = 0; i < size; i++)
 	
	Output: 1.0099e+06
					1.0199e+06
					1.02989e+06
							.
							.
							.
					1.02989e+06
					1.0199e+06
					1.0099e+06
					The elapsed time is: 1.188 seconds

 Test case 2: Valid data run
 	Input: for(int i = 1; i < size; i++)
 	
	Output: 1.0099e+06
					1.0199e+06
					1.02989e+06
							.
							.
							.
					1.03989e+06
					1.02989e+06
					1.0199e+06
					The elapsed time is: 1.141 seconds
						
 Test case 3: Valid data run
 	Input: incvalue = 10099;
				 decvalue = 100;
 	
	Output: 1.0099e+06
					999900
					989898
						.
						.
						.
					-1.9889e+08
					-1.9892e+08
					-1.9895e+08
					The elapsed time is: 1.343 seconds
		
 Test case 4: Abnormal data run
 	Input:  for(int i = -2; i < size; i++)
 	
 	Output: 1.0099e+06
					1.0199e+06
					1.02989e+06
							.
							.
							.
					1.0099e+06
					999900
					989898
					The elapsed time is: 1.281 seconds

 Test case 5: Limit conditions run
 	Input: for(int i = 0; i < size + 1; i++)
 	
 	Output: 1.0099e+06
					1.0199e+06
					1.02989e+06
							.
							.
							.
					1.0199e+06
					1.0099e+06
					999900
					The elapsed time is: 1.311 seconds
							
 Discussion: 
	The program has the correct output only when the loop is initialized at a value greater than or equal to 0 and the condition is less than the size of the arrays. 
 	Initialization of negative numbers or a condition that exceeds the size of the arrays produces a mostly valid output. 
 	Mostly because additional numbers are displayed in addition to the desired 10,000 values.
 	If the incrementing array is given a very large value and the decrementing array is given a very small value then the outputs will eventually become negative values.
*/

#include <iostream>
#include <ctime>
using namespace std;

void loop(){
	const int size = 10000;
	
	double incvalue = 100;
	double decvalue = 10099;
	double incarray[size];
	double decarray[size];
	
	for(int i = 0; i < size; i++){
		incarray[i]= incvalue ;
		decarray[i] = decvalue;
	
		const double result = incarray[i] * decarray[i];
		
		cout << result << endl;
	
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