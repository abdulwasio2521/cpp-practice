//Print the sum of even and odd numbers separately between 1 and N.
#include<iostream>
using namespace std;
int main(){
	
	int n;
	cout<<"Enter The Number Of Numers: ";
	cin>>n;
	
	int sumofeven = 0;
	int sumofodd = 0;
	
	for(int i = 1; i<=n; i++){
		if(i%2==0){
		sumofeven+=i; }
		else{
		sumofodd+=i;}
	}
	
	cout<<"Sum Of Even Numbers Is: " <<sumofeven <<endl;
	cout<<"Sum Of Odd Numbers Is: " <<sumofodd;
	
}
