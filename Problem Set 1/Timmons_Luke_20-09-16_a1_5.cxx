#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int a=0;
	int b=0;
	int c=0;
	
	cout << "Please enter your first number: ";
	cin >> a;
	
	cout << "\nPlease enter your second number: ";
	cin >> b;
	
	cout << "\nPlease enter your third number: ";
	cin >> c;
	
	if(c > a && c > b){
	cout << "\nThe maximum of the three numbers is " << c << endl;
	}
	if(b > a && b > c){
	cout << "\nThe maximum of the three numbers is " << b << endl;
	}
	if(a > c && a > b){
	cout << "\nThe maximum of the three numbers is " << a << endl;
	}
	  
	return 0;
}
