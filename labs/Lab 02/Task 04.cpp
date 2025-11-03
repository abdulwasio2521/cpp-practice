//Average on 5 numbers from user
#include<iostream>
using namespace std;
int main(){
	float a; //Decleration of a
	float b; //Decleration of b
	float c; //Decleration of c
	float d; //Decleration of d
	float e; //Decleration of e

	cout<<"Enter First Number: ";
	cin>>a;
	cout<<"\nEnter Second Number: " ;
	cin>>b;
	cout<<"\nEnter Third Number: " ;
	cin>>c;
	cout<<"\nEnter Fourth Number: ";
	cin>>d;
	cout<<"\nEnter Fifth Number: ";
	cin>>e;
	cout<<"\nThe Average of 5 numbers is: ";
	cout<<(a+b+c+d+e)/5;
}
