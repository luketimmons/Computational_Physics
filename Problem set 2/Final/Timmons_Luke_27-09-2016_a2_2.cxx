//include libraries in program
#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <math.h>
using namespace std;


//create constant for length of array
const int length_array = 10;

//main fucntion
int main(){

//intialise variables and array
int nr=0;
double vector [length_array];
double max=0;

cout << "Please enter the values of the array vector:" << endl;

//while loop for entering values to array
while(nr < length_array)
	{
			//user inputs value to array
			cout << "Value " << nr << ": ";
			cin >> vector [nr];
			nr = nr + 1;
		
	}
	
	cout << endl;

	// variable re-initalised at zero
	nr=0;
	
// while loop to check which component of array is maximum
while(nr < length_array){
	// if statement to see if component is maximum
	if( vector [nr]>max){
			max = vector [nr];
	}
	nr = nr +1;
}

// maximum number is printed
cout << "The maximum element of the array is " <<  max << endl;

return 0;
}

