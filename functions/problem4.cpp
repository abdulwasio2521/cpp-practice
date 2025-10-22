//Write a function that takes a number and returns whether it’s positive, negative, or zero.
#include<iostream>
using namespace std;
	void fun(int a);
	void fun(int a){
		if(a>0) cout<<"Positive";
		else if(a<0) cout<<"Negative";
		else cout<<"Zero";
	}
int main(){
	
	int x;
	cout<<"Enter Any Number: ";
	cin>>x;
	
	fun(x);
	
}
