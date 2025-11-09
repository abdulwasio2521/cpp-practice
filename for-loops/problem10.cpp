//Count how many numbers between 1 and N are divisible by 3.
#include<iostream>
using namespace std;
int main(){
	
	int n;
	cout<<"Enter Any Number: ";
	cin>>n;
	
	int count = 0;
	for(int i = 1; i<=n; i++){
		if(i%3==0) 
		count++;
	}
	cout<<"The Total Number Divsible By 3 between 1 and " <<n <<" are = " <<count;
	
}
