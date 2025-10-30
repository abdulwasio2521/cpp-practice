#include<iostream>
using namespace std;
int main(){
	int a;
	long long f = 1;
	
	cout<<"Enter A Number: "; 
	cin>>a;
	
	for(int i=1; i<=a; i++){
		f*=i;
	}
	cout<<"Factorial Of "<<a <<" is: " <<f;
	return 0;
}
