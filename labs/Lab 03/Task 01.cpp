#include<iostream>
using namespace std;
int main(){
	
	float a;
	float b;
	
	cout<<"Enter the First Number: ";
	cin>>a;
	cout<<"Enter the Second Number: ";
	cin>>b;
	cout<<" " <<endl;
	
	cout<<"The Arithmetic Operators" <<endl;
	cout<<"The Addition is: "<<a+b <<endl;
	cout<<"The Subtraction Of: "<<a-b <<endl;
	cout<<"The Multiplication Of: " <<a*b <<endl;
	cout<<"The Division Of: "<<a/b <<endl <<endl; 
	
	cout<<"The Unary Operators" <<endl;
	cout<<"Unary Plus is: " <<+a <<endl;
	cout<<"Unary Minus is: " <<-b <<endl;
	cout<<"The Pre-Increment is: "<<++a <<endl;
	cout<<"The Post-Increment is: "<<a++ <<endl;
	cout<<"The Pre-Decrement is: "<<--b <<endl;
	cout<<"The Post-Decrement is: "<<b-- <<endl <<endl;
	
	cout<<"Relational Operators" <<endl; //answers will be given in form of 1 & 0, 1=true and 0=false
	cout<<"a is less than b: " <<(a<b) <<endl;
	cout<<"a is greater than b: " <<(a>b) <<endl;
	cout<<"a is less than and equal to b: " <<(a<=b) <<endl;
	cout<<"a is greater than and equal to b: " <<(a>=b) <<endl;
	cout<<"a is equal to b: " <<(a==b) <<endl;
	cout<<"a is not equal to b: " <<(a!=b) <<endl <<endl;
	
	cout<<"Logical Operators" <<endl;
	cout<<"Logical And Opreator (a<b and b>a): " <<(a<b && b>a) <<endl;
	cout<<"Logical Or Opreator (a>b or b<a): " <<(a>b || b<a) <<endl;
	cout<<"Logical Not Opreator (a==b): " <<!(a=b) <<endl <<endl;
	
	return 0;
}
