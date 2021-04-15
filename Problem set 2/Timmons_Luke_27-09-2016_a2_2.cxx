#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <math.h>
#include <unistd.h>

using namespace std;

const int length_array = 10;

int main(){

int nr=0;
double vector [length_array];
double max=0;

cout << "Please enter the values of the array vector:" << endl;

while(nr < length_array)
	{
			cout << "Value " << nr << ": ";
			cin >> vector [nr];
			nr = nr + 1;
		
	}
	
	cout << endl;
	nr=0;
	
while(nr < length_array){
	if( vector [nr]>max){
			max = vector [nr];
	}
	nr = nr +1;
}

cout << "The maximum element of the array is " <<  max << endl;

return 0;
}

