#include<iostream>
using namespace std;
int main(){
	int a;
	int b;
	cout<<"Enter First Number: ";
	cin>>a;
	cout<<"Enter Second Number: ";
	cin>>b;
	cout<<"" <<endl; //added this for space in line

	cout<<"Relational Operators" <<endl; //answers will be given in form of 1 & 0, 1=true and 0=false
	cout<<"a is less than b: " <<(a<b) <<endl;
	cout<<"a is greater than b: " <<(a>b) <<endl;
	cout<<"a is less than and equal to b: " <<(a<=b) <<endl;
	cout<<"a is greater than and equal to b: " <<(a>=b) <<endl;
	cout<<"a is equal to b: " <<(a==b) <<endl;
	cout<<"a is not equal to b: " <<(a!=b) <<endl <<endl;
}
