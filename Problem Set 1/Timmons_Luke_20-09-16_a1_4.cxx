#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double a=0;
	double b=0;
	double c=0;
	
	double sum;
	double product;
	
	cout << "Please enter your first number: ";
	cin >> a;
	
	cout << "\nPlease enter your second number: ";
	cin >> b;
	
	cout << "\nPlease enter your third number: ";
	cin >> c;
	
	sum = a + b + c;
	product = a * b * c;
	
	cout << "\nThe sum of the three numbers is " << sum << endl;
	
	cout << "The product of the three numbers is " << product << endl;
	  
	return 0;
}
