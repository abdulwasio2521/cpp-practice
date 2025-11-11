//Write a function that prints your name five times.
#include<iostream>
using namespace std;

	void name(string name1);
	void name(string name1) {
		cout<<name1 <<endl;
		cout<<name1 <<endl;
		cout<<name1 <<endl;
		cout<<name1 <<endl;
		cout<<name1 <<endl;
	}
int main(){
	
	string x;
	cout<<"Enter Your Name: ";
	cin>>x;
	
	name(x);
	
}
