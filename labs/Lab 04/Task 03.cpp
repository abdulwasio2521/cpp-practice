#include<iostream>
using namespace std;
int main(){
	
	int a = 1;
	int sum = 0;
	
	while(a<=10){
		sum += a;
		a++;
	}
	cout<<"Sum Of First 10 natural numbers is: " <<sum;
}
