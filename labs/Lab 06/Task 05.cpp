//Create a function celsiusToFahrenheit that converts a given temperature in Celsius to Fahrenheit.

#include<iostream>
using namespace std;

	long fun(int a);
	long fun(int a){
		long t = (a)*(9/5)+(32);
		return t;
	}
	
int main(){
	
	int x;
	cout<<"Enter Temperature In Celsius: ";
	cin>>x;
	
	cout<<"The Temperature In Fahrenheit: " << fun(x);
	
}
