#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <assert.h>
#include <math.h>
#include <unistd.h>
#include "gnuplot.cxx"


using namespace std;



int main(){
double v_0 = 0;
double x_0 = 0;
double t_f = 0;
int plot_points = 0;

cout << "Please enter the initial value for the velocity of the projectile: ";
cin >> v_0;
cout << endl;

cout << "Please enter the initial value for the position of the projectile from the origin: ";
cin >> x_0;
cout << endl;

cout << "Enter final time: ";
cin >> t_f;
cout << endl;

cout << "Enter number of plot points: ";
cin >> plot_points;
cout << endl;

cout << "Press enter to see the graph: ";
cin.get();


double t [plot_points];
double x [plot_points];
double v [plot_points];

int i=0;

for (int i=0; i < plot_points; i++){
	t [i] = t_f/plot_points * i; 
	v [i] = g*(t_f/plot_points * i) + v_0;
	x [i] = 0.5*9.81*((t_f/plot_points * i)^2) + v_0*(t_f/plot_points * i) + x_0;
}

cout << "Plot x(t) = 0.5*g*(t^2)+ v_0*t + x_0 and v(t) = g*t + v_0 \n";
gnuplot_two_functions ("First Plot", "linespoints", "x", "y", x, t, plot_points, "x(t)", v, t, plot_points, "v(t)");

return 0;
}

