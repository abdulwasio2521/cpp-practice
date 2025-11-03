//Print the following Pattern, when n = 4
// *
// * *
// * * *
// * * * *
#include<iostream>
using namespace std;
int main(){
	
	int n;
	cout<<"Enter Any Number: ";
	cin>>n;
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<i+1; j++){
			cout<<"* ";
		}
	cout<<endl;
	}
	
}
