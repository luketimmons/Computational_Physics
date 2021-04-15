#include <stdio.h>


int main(){
	int a;
	double b;
	
	scanf ("%d", &a);
	scanf ("%lf", &b);
	
	if(a < b){
		printf ("a=%d is less than b=%lf\n", a,b);
	}
	
	if(a > b){
		printf ("a=%d is greater ", a);
		printf ("than b=%lf\n", b);
	}
	
	if(a == b){
		printf ("a is equal to b=%lf\n", b);
	}
	
	return 0;
}
