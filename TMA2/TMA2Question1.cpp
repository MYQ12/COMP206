/* 
 Title: TMA2Question2.cpp
 Author: Mohammad Yehya Qureshi
*/

/*
 DOCUMENTATION
 
 Program Purpose: Create an abstract data type that represents a DVD in a dvd rental store. 
 				  Consider all the data and operations that may be necessary for the DVD type to work well within a rental management system. 
 				  Include a print() member function that displays all the information about the DVD. 
 				  Test the class by creating an array of ten DVD instances and filling them using information 
 				  read from a test input file that you create. Display the DVD information.

 Compile: c++ -o TMA2Question1.exe TMA2Question1.cpp
 Execution: ./TMA2Question1.exe
 
 Classes: 
 	DVD - contains all the data and operations that may be necessary for the DVD type to work well within a rental management system. 

 Variables: 
 	fin - ifstream - used to open the file for reading	
 	array - DVD - used to store the contents of the file	
*/

/*
 TEST PLAN
 
 Test case 1: Valid data run
 	Input:	Bad_Boys_for_Life 2020 Comedy/Action 01/17/2020 01/18/2020 R
			The_Current_War 2017 History 07/26/2019 07/27/2019 PG-13
			The_Last_Full_Measure 2019 War/Drama 10/19/2019 10/20/2019 R
			Sonic_the_Hedgehog 2020 Family/Comedy 02/14/2020 02/15/2020 PG
			Harey_Quinn:_Brids_of_Prey 2020 Action 02/07/2020 02/08/2020 R
			Dolittle 2020 Family/Adventure 01/17/2020 01/18/2020 PG
			Trolls_World_Tour 2020 Comedy/Animation 04/10/2020 04/11/2020 PG
			The_Ballad_of_Esequiel_Hernández 2007 Documentary 04/27/2007 04/28/2007 NR
			The_Inventor:_Out_for_Blood_in_Silicon_Valley 2019 Documentary 03/18/2019 03/19/2019 TV-14
			The_Gentlemen 2019 Action/Comedy/Crime 01/24/2020 01/25/2020 R 
 	
	Output: Bad Boys for Life 2020 Comedy/Action 01/17/2020 01/18/2020 R
			The Current War 2017 History 07/26/2019 07/27/2019 PG-13
			The Last Full Measure 2019 War/Drama 10/19/2019 10/20/2019 R
			Sonic the Hedgehog 2020 Family/Comedy 02/14/2020 02/15/2020 PG
			Harey Quinn: Brids of Prey 2020 Action 02/07/2020 02/08/2020 R
			Dolittle 2020 Family/Adventure 01/17/2020 01/18/2020 PG
			Trolls World Tour 2020 Comedy/Animation 04/10/2020 04/11/2020 PG
			The Ballad of Esequiel Hernández 2007 Documentary 04/27/2007 04/28/2007 NR
			The Inventor: Out for Blood in Silicon Valley 2019 Documentary 03/18/2019 03/19/2019 TV-14
			The Gentlemen 2019 Action/Comedy/Crime 01/24/2020 01/25/2020 R

 Test case 2: Valid data run
 	Input:	Bad_Boys_for_Life 2020 Comedy/Action 01/17/2020 01/18/2020 R
			The_Current_War 2017 History 07/26/2019 07/27/2019 PG-13
			The_Last_Full_Measure 2019 War/Drama 10/19/2019 10/20/2019 R
			Sonic_the_Hedgehog 2020 Family/Comedy 02/14/2020 02/15/2020 PG
			Harey_Quinn:_Brids_of_Prey 2020 Action 02/07/2020 02/08/2020 R
 	
	Output: Bad Boys for Life 2020 Comedy/Action 01/17/2020 01/18/2020 R
			The Current War 2017 History 07/26/2019 07/27/2019 PG-13
			The Last Full Measure 2019 War/Drama 10/19/2019 10/20/2019 R
			Sonic the Hedgehog 2020 Family/Comedy 02/14/2020 02/15/2020 PG
			Harey Quinn: Brids of Prey 2020 Action 02/07/2020 02/08/2020 R
 	
 Test case 3: Valid data run
 	Input:	2020 Comedy/Action 01/17/2020 01/18/2020 R
			The_Current_War History 07/26/2019 07/27/2019 PG-13
			The_Last_Full_Measure 2019 10/19/2019 10/20/2019 R
			Sonic_the_Hedgehog 2020 Family/Comedy 02/15/2020 PG
			Harey_Quinn:_Brids_of_Prey 2020 Action 02/07/2020 R
			Dolittle 2020 Family/Adventure 01/17/2020 01/18/2020 
 	
	Output: 2020 Comedy/Action 01/17/2020 01/18/2020 R The_Current_War
			History 07/26/2019 07/27/2019 PG-13 The_Last_Full_Measure 2019
			10/19/2019 10/20/2019 R Sonic_the_Hedgehog 2020 Family/Comedy
			02/15/2020 PG Harey_Quinn:_Brids_of_Prey 2020 Action 02/07/2020
			R Dolittle 2020 Family/Adventure 01/17/2020 01/18/2020

 Test case 4: Abnormal data run
 	Input: File not found 
 	Output: Blank
 
 Test case 5: Limit conditions run
 	Input: More than 10 DVD instances
 	Output: Bad Boys for Life 2020 Comedy/Action 01/17/2020 01/18/2020 R
			The Current War 2017 History 07/26/2019 07/27/2019 PG-13
			The Last Full Measure 2019 War/Drama 10/19/2019 10/20/2019 R
			Sonic the Hedgehog 2020 Family/Comedy 02/14/2020 02/15/2020 PG
			Harey Quinn: Brids of Prey 2020 Action 02/07/2020 02/08/2020 R
			Dolittle 2020 Family/Adventure 01/17/2020 01/18/2020 PG
			Trolls World Tour 2020 Comedy/Animation 04/10/2020 04/11/2020 PG
			The Ballad of Esequiel Hernández 2007 Documentary 04/27/2007 04/28/2007 NR
			The Inventor: Out for Blood in Silicon Valley 2019 Documentary 03/18/2019 03/19/2019 TV-14
			The Gentlemen 2019 Action/Comedy/Crime 01/24/2020 01/25/2020 R
		
 Discussion: 
 	The program accepts 10 or less DVD instances, if there are more than 10, the extra instances are ignored.
 	
 	The program will not produce an output if the file cannot be found. 
 	
 	The length of the string is relevant to the program's performance, there needs to be exactly 6 white-space seperated text per line in the input file.
 	If per line the number is less than 6, than the program will skip to the next line and include the text in the next line with the output 
 	of the previous line to satisfy the 6 output requirement.	
*/

#include "TMA2Question1.h"
#include <iostream>
#include <fstream>
using namespace std;

int main(){   
 	DVD array[10];
    
	ifstream fin("TMA2Q1.txt");    
    
    for(int i = 0; i < 10; i++)
        array[i].Read(fin);        
    
    for(int i = 0; i < 10; i++)   
        array[i].Print();

    fin.close();
}///:~