//Write a function that takes two integers and returns their difference.
#include<iostream>
using namespace std;

	int differ(int a, int b);
	int differ(int a, int b){
	int d = a - b;
	return d;
	}
	
int main(){
	
	int a;
	int b;
	cout<<"Enter First Number: ";
	cin>>a;
	cout<<"Enter Second Number: ";
	cin>>b;
	
	cout<< "The Difference Of " <<a <<" and " <<b <<" Is " <<differ(a,b);
	
}
