# Computational_Physics
Code produced as part of a computational physics course taken during the second year of my undergraduate degree. The problem sets highlight the progression in the complexity of  both the C++ code used throughout the module as well as the complexity of the problems to be considered, coinciding with a final project exploring the Lorenz model of fluid dynamics.

Problem Set 1:

1_2: This code is a typical 'Hello World' script to show the capabilities of standard C++ libraries and code, and print a string once the code is run.

1_3: This code is focused on the comparison of an integer, and a double variable, where the values of these variables are inputted by the user of the script. Using if statements, the value of the variables are compared, and a string is printed based on the result of the if statement. In this case, the if statements return whether the integer variable 'a' is greater, less than, or equal to the double variable 'b'.

1_4: This code calculates the sum and product of three double variables, set to zero by default, following a prompt for input by the user. The script then utilises standard mathematical operations in C++ to calculate the sum and product and return the results to the user in the form of a string.

1_5: This code focuses on the determination of the maximum of three doubles, inputted by the user and set to zero by default. Through the use of if statements, the maximum of the three variables is determined and a string is returned to the user indicating which of the user inputted variables fulfils the conditions of the if statements.

1_6: This code is focused on solving the linear equation of motions, as applied to a particle moving under gravity. In this scenario, the particle is projected upwards or downwards with a given velocity and initial height of the particle. The solution of the equations of motion provides the maximum height of the particle, taking the upward direction as the positive direction of motion and calculated using standard mathermatical operations. The maximum height is then returned to the user in the form of a string.

Problem Set 2:

2_1: This code uses a while loop to print the value of a variable, inputted by the user, in the form of a string so long as the condition of the while loop is satisfied. Within the while loop, the script will print the value of the variable if the value is between 1 and 99, inclusive, and print an 'error' message, if the value of the variable is greater than 99 or is equal to zero. If the user inputs -1 as the variable, the while loop is broken and the script terminates.

2_2: This script uses two while loops such that the user can input the values for elements of an array of set lenght, and the maximum value of that array is then returned to the user. The first while loop is used to append user-inputted numerical values to an array, of set length, until the index of the array element exceeds the length of the array. Following this, the second while loop updates a variable, initially set to zero, if the value of the array element is greater than the variable for the the maximum for the given iteration of the while loop, with the while loop having the same conditions as the first loop. Once the conditions of the loop have been satisfied the value of the variable for the maximum is returned to the the user in a string.

2_3: This code takes two user-inputted arrays, of length three such that they represent mathematical vectors, and calculates the dot product of those vectors, and returns the scalar result to the user. Using similar while loops to those in 2_2, the user inputs values corresponding to the x,y, and z coordinates of the vector in cartesian space. Following this, a third while loop focuses on the implementation of the dot product multiplying elements of the same index and summing together for a total value, representing the dot product of the vector. The scalar value is then returned to the user.

2_4: This script plots the trajectory of a projectile for a user-inputted velocuty, initial postition from origin, a final time of motion, and a number of plot points. The time coordinate, position, and velocity of the particle for each plot point are determined using the equations of linear motion, with the values in each case appended to arrays for each respective quantity. The contents of each array are then plotted using Gnuplot, where the plots in question are of the velocity as a function of time and the position of the particle as a function of time.

Problem Set 3:

3_1: This script calculates the factorial of a positive integer, inputted by the user, through the use of a while loop within which the factorial is calculated using standard mathematical operations, i.e. multiplication. The factorial is then returned to the user in a string.

3_3: This code determines the trajectory of a projectile via use of the Euler method and equations of linear motion for a set of user-inputted variables, including the initial position, velocity, final time of motion, and the number of time intervals. By calculating the value of the variables for each time interval and appending them to respective arrays, the position of the projectile as a function of time was produced and returned to the user, using Gnuplot
