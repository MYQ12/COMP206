/* 
 Title: TMA1Question3.cpp
 Author: Mohammad Yehya Qureshi
*/

/*
 DOCUMENTATION
 
 Program Purpose: Use two nested for loops and the modulus operator to detect and print the prime numbers from 1 to 10,000.

 Compile: c++ -o TMA1Question3.exe TMA1Question3.cpp
 Execution: ./TMA1Question3.exe
 
 Classes: none

 Variables: chk - bool - used to represent whether the value in the outer loop is a prime number or not
*/

/*
 TEST PLAN
 
 Test case 1: Valid data run
 	Input: for (int i = 2; i < 10000; i++)
 	Output: 2 is Prime, 3 is Prime, 5 is Prime, 7 is Prime, 11 is Prime, .... , 9973 is Prime
 	
 Test case 2: Valid data run
 	Input: for (int i = 3; i < 10000; i++)
 	Output: 3 is Prime, 5 is Prime, 7 is Prime, 11 is Prime, .... , 9973 is Prime
 	
 Test case 3: Valid data run
 	Input: for (int i = 4; i < 10000; i++)
 	Output: 5 is Prime, 7 is Prime, 11 is Prime, .... , 9973 is Prime
 	
 Test case 4: Abnormal data run
 	Input: for (int i = -2; i < 10000; i++) 
 	Output: error: -2 is Prime, -1 is Prime, 0 is Prime, 1 is Prime, 2 is Prime, 3 is Prime, 5 is Prime, 7 is Prime, 11 is Prime ... 9973 is Prime

 Test case 5`: Limit conditions run
 	Input: for (int i = 0; i < 10000; i++) 
 	Output: 0 is Prime, 1 is Prime, 2 is Prime, 3 is Prime, 5 is Prime, 7 is Prime, 11 is Prime ... 9973 is Prime
 
 Discussion:
 	The program has the correct output only when the outer loop is given integers greater than 1. This is because normally for a number to be lablled as a prime number 
 	it needs to be divisble by only two integers. 1, however, is divisble only by one integer, itself, therefore 1 is not labeled as a prime number therefore 
 	it should not be inlcuded. However, when the value of 1, or 0, is given to the outerloop the program will determine that they are a prime number. 
 	Therefore the lowest value that the outer loop can accept to display correctly is 2. 
 	
 	Negative numbers are allowed and processed as if legitimate, however, the output is incorrect. This is because 
 	by the defintions of prime numbers, primes are integers greater than one with no positive divisors besides one and itself. The program determines that the negative
 	integers including 0 and 1 are prime.
*/

#include <iostream>
using namespace std;

int main() {
	bool chk;
    
	for (int i = 2; i < 10000; i++) {
		chk = true;
        
		for (int j = 2; j <= i / 2; j++ ) {
			if (i % j == 0) {
				chk = false;
				break;
            		}
        	}
        
		if (chk == true)
			cout << i << " is Prime" << endl;
   	 }
} ///:~
