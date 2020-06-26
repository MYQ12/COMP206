/* 
 Title: TMA1Question3.cpp
 Author: Mohammad Yehya Qureshi
*/
 
// Program Purpose: Use two nested for loops and the modulus operator to detect and print the prime numbers from 1 to 10,000.

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
