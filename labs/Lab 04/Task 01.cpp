#include<iostream>
using namespace std;
int main(){
	
	int a;
	cout<<"Enter The Number Of Rows: ";
	cin>>a; //>> extresion
	
	for(int i=1; i<=a; i++){ //used for the how many number lines will be used?
		for(int j=1; j<=i; j++){ //Inner Loop; 
		cout<<"* ";
	}
	cout <<endl;
	}
	return 0;
	
}
