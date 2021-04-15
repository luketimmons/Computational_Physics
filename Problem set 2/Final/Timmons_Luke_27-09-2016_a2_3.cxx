//include libraries in program
#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <math.h>

using namespace std;

//initialise constant length for the array
const int length_array = 3;

//main function
int main(){
//declaration of arrays
double vector1 [length_array];
double vector2 [length_array];

//declaration and initalisation of variables
int nr = 0;
double dotproduct=0;
double temp=0;

cout << "Please enter the values for the first vector:" << endl;

//while loop for entering values to first array
while(nr < length_array){
	//user inputs value for component of array
			cout << "Value " << nr << ": ";
			cin >> vector1 [nr];
			nr = nr + 1;	
}

// variable re-initialised to zero
nr=0;

cout << "Please enter the values for the second vector:" << endl;

// while loop for entering values to second array
while(nr < length_array){
	//user inputs values for component of array
			cout << "Value " << nr << ": ";
			cin >> vector2 [nr];
			nr = nr + 1;	
}

// variable re-initalised to zero
nr=0;

//while loop to calculate dot product of two arrays
while(nr < length_array){
			dotproduct = (vector1 [nr]) * (vector2 [nr]);
			temp = temp + dotproduct;
			nr = nr + 1;
}
dotproduct = temp;

// print dot product of two arrays
cout << "The dot product of the two vectors is " << dotproduct << endl;

return 0;
}

