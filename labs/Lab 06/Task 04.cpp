//Import and use Math Library in your program to calculate Squareroot, Cuberoot and Power of a number by using pre-defined functions.

#include<iostream>
#include<math.h>
using namespace std;
int main(){
	
	int a;
	cout<<"Enter Any Number: ";
	cin>>a;
	
	cout<<"The Square Root Of " <<a <<" is: " << sqrt(a) <<endl;
	cout<<"The Cube Root Of " <<a <<" is: " << cbrt(a) <<endl;
	cout<<"The Cube Power Of " <<a <<" is: " << pow(a, 3) <<endl;
	
}
