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


// Constants

const int max_number_steps = 10000;

// Main programme

int main ()
{
   double theta_0, omega_0,f_0 , gamma, T, Omega, Omega_D, dt;
   int number_steps, nr;
   
   double value_t [max_number_steps];
   double value_theta [max_number_steps];
   double value_omega [max_number_steps];
   
   

    // Read Parameters
	cout << "theta_0 = ";
	cin >> theta_0;
	
	cout << "omega_0 = ";
	cin >> omega_0;
	
	cout << "f_0 = ";
	cin >> f_0;
	
	cout << "gamma = ";
	cin >> gamma;
	
	cout << "Omega = ";
	cin >> Omega;
	
	cout << "Omega_D = ";
	cin >> Omega_D;
	
	cout << "T = ";
	cin >> T;
    
    dt = 0.05;
    
    number_steps = T/dt;
    
    cout << "dt = " << dt << "\n";
    cin.get();

    // Numerical Simulation using Euler-Cromer method
    value_t [0] = 0.0;
    value_theta [0] = theta_0;
    value_omega [0] = omega_0;
    
    nr = 0;
    while (nr < number_steps)
    {
      value_t [nr+1] = dt*(nr+1);
      value_omega [nr+1] = value_omega [nr] + dt*(-1*(Omega*Omega*sin(value_theta[nr]))-2*(gamma*value_omega[nr])+f_0*(cos(Omega_D*value_t[nr])));
      value_theta [nr+1] = value_theta [nr] + dt*value_omega[nr+1];
      nr=nr+1;
    }
    
    gnuplot_two_functions_jpg ("Motion of forced, damped non-linear oscillator", "linespoints", "t", "", value_t, value_theta, number_steps+1,"theta(t)",value_t,value_omega, number_steps+1,"omega(t)", "Timmons_Luke_18-10-16_a4_b_1.0.jpg");
    
    return 0;
}
