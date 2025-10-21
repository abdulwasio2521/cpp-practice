//Calculate the factorial of a given number.
#include<iostream>
using namespace std;
int main(){
	
	int n;
	cout<<"Enter Any Number: ";
	cin>>n;
	
	long long fact = 1;
	
	for(int i=1; i<=n; i++){
		fact*=i;
	}
	cout<<"The Factorial Of " <<n <<" Is " <<fact;
}
