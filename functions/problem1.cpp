//Write a function that prints your name five times.
#include<iostream>
using namespace std;

	void name(string name1);
	void name(string name) {
		cout<<name <<endl;
		cout<<name <<endl;
		cout<<name <<endl;
		cout<<name <<endl;
		cout<<name <<endl;
	}
int main(){
	
	string x;
	cout<<"Enter Your Name: ";
	cin>>x;
	
	name(x);
	
}
