#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <math.h>
#include <unistd.h>

using namespace std;

const int length_array = 3;

int main(){

int nr=0;
double vector1 [length_array];
double vector2 [length_array];

double dotproduct=0;
double temp=0;

cout << "Please enter the values for the first vector:" << endl;

while(nr < length_array){
			cout << "Value " << nr << ": ";
			cin >> vector1 [nr];
			nr = nr + 1;	
}

nr=0;

cout << "Please enter the values for the second vector:" << endl;
while(nr < length_array){
			cout << "Value " << nr << ": ";
			cin >> vector2 [nr];
			nr = nr + 1;	
}

nr=0;

while(nr < length_array){
			dotproduct = (vector1 [nr]) * (vector2 [nr]);
			temp = temp + dotproduct;
			nr = nr + 1;
}
dotproduct = temp;
cout << "The dot product of the two vectors is " << dotproduct << endl;


return 0;
}

