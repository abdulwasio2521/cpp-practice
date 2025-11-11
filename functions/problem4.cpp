//Write a function that takes a number and returns whether it’s positive, negative, or zero.
#include<iostream>
using namespace std;
	void fun(int a);
	void fun(int a){
		if(a>0) cout<<"POSITIVE";
		else if(a<0) cout<<"NEGATIVE";
		else cout<<"ZERO";
	}
int main(){
	
	int x;
	cout<<"Enter any number: ";
	cin>>x;
	
	fun(x);
	
}
