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
int main() {

	//intialise variables and array
	int n = 0;
	long long factorial = 1;
	int i = 1;
	
	cout << "This program is used to find the factorial of a positive integer" << endl;

	cout << "Please enter a positive integer: ";
	cin >> n;
	cout << endl;

	if (n == 0) {
		cout << "The factorial of 0 is 1" << endl;
		return 0;
	}
	
	// while loop to check which component of array is maximum
	while (i <= n) {
		factorial *= i;
		i = i + 1;
	}

	// maximum number is printed
	cout << "The factorial of " << n << " is "  << factorial << endl;
	return 0;
}

