#include <stdio.h>
int main(){
	double a=0;
	double b=0;
	double c=0;
	
	double sum=0;
	double product=0;
	
	printf("Please enter your first number: ");
	scanf ("%lf", &a);
	
	printf("\nPlease enter your second number: ");
	scanf ("%lf", &b);
	
	printf("\nPlease enter your third number: ");
	scanf ("%lf", &c);
	
	sum = a + b + c;
	product = a * b * c;
	
	printf("\nThe sum of the three numbers is %lf.\n", sum);
	
	printf("The product of the three numbers is %lf.\n", product);
	  
	return 0;
}
