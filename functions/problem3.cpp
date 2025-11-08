//Write a function that multiplies three numbers and returns the product.
#include<iostream>
using namespace std;

	int fun(int a, int b, int c);
	int fun(int a, int b, int c){
		int m = a*b*c;
		return m;
	}

int main(){
	
	int x, y, z;
	cout<<"Enter the First Number: ";
	cin>>x;
	cout<<"Enter the Second Number: ";
	cin>>y;
	cout<<"Enter the Third Number: ";
	cin>>z;
	
	cout<<"The Product Is: " <<fun(x,y,z);
	
}
