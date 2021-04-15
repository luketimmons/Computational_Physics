#include <iostream>
#include <iomanip>

using namespace std;


int main(){
	int a=0;
	int i=0;


	while(i!=-1){
		cout << "Please enter a number between 1 and 99:";
		cin >> a;
		cout << endl;
		
		if(a >= 1 && a <= 99){
			cout << "The number you chose is " << a << "." << endl;
			i=-1;
		}
		else
		{
			cout << "Only numbers between 1 and 99 are acceptable." << endl;
			cout << endl;
		}

}

return 0;
}
