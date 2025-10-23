//Write a program that take your name and age as a parameter in function and return the string with concatenation {YourName} you were born in {BirthYear}

#include<iostream>
using namespace std;

	void fun(int a, string nam);
	void fun(int a, string nam){
		int currentyear = 2025;
		cout<<nam <<" You were born in " <<2025-a;
	}
int main(){
	
	int age;
	string name;
	
	cout<<"Enter Your Name: ";
	cin>>name;
	cout<<"Enter Your Age: ";
	cin>>age;
	
	fun(age, name);
	
}
