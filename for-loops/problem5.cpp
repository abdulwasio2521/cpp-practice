//Print the multiplication table of any number entered by the user.
#include<iostream>
using namespace std;
int main(){
	
	int n;
	cout<<"Enter Any Number: ";
	cin>>n;
	
	cout<<"\nMultiplication Table of " <<n <<":" <<endl;
	
	for(int i = 1; i<=10; i++){
		cout<<n <<" x " <<i <<" = " <<n*i <<endl;
	}
}
