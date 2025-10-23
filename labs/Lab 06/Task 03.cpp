//Create a findSmall(int a, int b, int c) function that take three integer values and return the smallest number.

#include<iostream>
using namespace std;

	int fun(int a, int b, int c);
	int fun(int a, int b, int c){
		if (a<b && a<c) return a;
		else if (a>b && b<c) return b;
		else return c;
	}

int main(){
	
	int x, y, z;
	
	cout<<"Enter First Number: ";
	cin>>x;
	cout<<"Enter Second Number: ";
	cin>>y;
	cout<<"Enter Third Number: ";
	cin>>z;
	
	cout<<"The Smallest Number Is: " <<fun(x,y,z);
	
}
