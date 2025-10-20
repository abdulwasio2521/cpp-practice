//Find the sum of the first N natural numbers (take N from user).
#include<iostream>
using namespace std;
int main(){
	
	int n;
	cout<<"Enter Your Number: ";
	cin>>n;
	
	int sum = 0;
	
	for(int i = 1; i<=n; i++){
		cout<<i <<endl;
		sum += i;
	}
	cout<<"The Sum Of All Numbers Is: " <<sum;
}
