//Print the following Pattern, when n=4
// 1 1 1 1
// 2 2 2
// 3 3 
// 4 
#include<iostream>
using namespace std;
int main(){
	
	int n;
	cout<<"Enter Any Number: ";
	cin>>n;
	
	int num = 1;
	
	for(int i = n; i>0; i--){
		for(int j = 1; j<=i; j++){
			cout<<num <<" ";
		}
	num = num + 1;
	cout<<endl;
	}
}
