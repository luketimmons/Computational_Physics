//include libraries
#include <iostream>
#include <iomanip>

using namespace std;

//main function
int main(){
	//intialisation of variables
	int a=0;
	int i=0;

	//while loop until user enters a number between 1 and 99
	while(i!=-1){
		// user inputs number
		cout << "Please enter a number between 1 and 99: ";    
		cin >> a;
		cout << endl;
		
		//if function to check if number is between 1 and 99
		if(a >= 1 && a <= 99){
			//user inputed number is printed and while loop condition is satisfied
			cout << "The number you chose is " << a << "." << endl;
			i=-1;
		}
		else
		{
			//response is printed and while loop condition remains unsatisfied
			cout << "Only numbers between 1 and 99 are acceptable." << endl;
			cout << endl;
		}

	}
return 0;
}
