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

//main function
int main(){
//declare variables for initial conditions
double v_0;
double x_0;
double t_f;
int plot_points;

//user unputs value for initial velocity of projectile
cout << "Please enter the initial value for the velocity of the projectile: ";
cin >> v_0;
cout << endl;

//user inputs initial position of projectile
cout << "Please enter the initial value for the position of the projectile from the origin: ";
cin >> x_0;
cout << endl;

//user enters the time elapsed for motion
cout << "Please enter the elapsed time for the motion: ";
cin >> t_f;
cout << endl;

//user inputs number of plot points for graph
cout << "Please enter the number of plot points for the graph: ";
cin >> plot_points;
cin.get();

cout << endl;

//declaration of arrays
double t [plot_points];
double x [plot_points];
double v [plot_points];

//for loop to calculate the velocity, position and time for each plot point
for (int i=0; i <= plot_points; i++){
	t [i] = t_f/plot_points * i; 
	v [i] = 9.81*(t_f/plot_points * i) + v_0;
	x [i] = 0.5*9.81*((t_f/plot_points * i)*(t_f / plot_points * i)) + v_0*(t_f/plot_points * i) + x_0;
}
 
//Print two functions on one graph using gnuplot
cout << "Plot x(t) = 0.5*g*(t^2)+ v_0*t + x_0 and v(t) = g*t + v_0 \n";
gnuplot_two_functions ("First Plot", "linespoints", "x", "y", t, x, plot_points +1, "x(t)", t, v, plot_points+1, "v(t)");

return 0;
}

