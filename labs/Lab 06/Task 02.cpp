//Create a swapValues(int a, int b) function that swap two integer values without using third variable. And print before and after swapping.

#include<iostream>
using namespace std;

	void fun(int a, int b);
	void fun(int a, int b){
		cout<<"The Intial Value Of a = " <<a <<" and b = " <<b <<endl;
		b = b + a;
		a = b - a;
		b = b - a;
		cout<<"The Reversed Value Of a = " <<a <<" and b = " <<b;
	}
int main(){
	
	int x,y;
	cout<<"Enter Value Of a = ";
	cin>>x;
	cout<<"Enter Value Of b = ";
	cin>>y;
	cout<<endl;
	fun(x,y);

}
