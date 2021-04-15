//include libraries in program
#include <iostream>
#include <string>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
using namespace std;
#include <stdlib.h>
#include <stdarg.h>
#include <assert.h>
#include "gnuplot.cxx"


// constants
const int max_number_steps = 10000;

// main function
int main() {
	// declaration of variables
	double x0, v, t_end, dt;
	int number_steps, nr;

	//declaration of arrays
	double value_t[max_number_steps];
	double value_x[max_number_steps];

	//read parameters
	cout << "Please enter a value for the initial position: ";
	cin >> x0;
	cout << endl;
	
	cout << "Please enter a value for the velocity: ";
	cin >> v;
	cout << endl;

	cout << "Please enter a value for the final time for the motion: ";
	cin >> t_end;
	cout << endl;

	cout << "Please enter a value for the number of steps in the plot of x(t): ";
	cin >> number_steps;
	cout << endl;

	dt = t_end / number_steps;

	cout << "dt = " << dt << "\n";

	// Numerical Simulation using Euler method
	value_t[0] = 0.0;
	value_x[0] = x0;

	nr = 0;
	while (nr < number_steps) {
		value_t[nr + 1] = dt*(nr + 1);
		value_x[nr + 1] = value_x[nr] + dt*v;
		nr = nr + 1;
	}

	//printing of plot of x(t)
	gnuplot_one_function("x(t)", "linespoints", "t", "x",value_t, value_x, number_steps + 1);

	system("pause");
	return 0;

	
}

