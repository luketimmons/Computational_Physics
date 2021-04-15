#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	double v0=0;
	double h0=0;
	double h=0;
 	const double g = 9.81;
	
	cout << "Please enter the initial velocity of the projectile in (m/s): ";
	cin >> v0;
	cout << endl;
	
	cout << "Please enter the initial height of the projectile above the earth (in m): ";
	cin >> h0;
	cout << endl;
	
	h = (pow(v0,2))/(2*g);
	
	double hm = h + h0;
	
	cout << "The maximum height of the projectile above the earth is " << hm << endl;  
	  
	return 0;
}

