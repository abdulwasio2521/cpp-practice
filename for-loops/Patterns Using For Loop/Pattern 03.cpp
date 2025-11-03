//Print the following Pattern, when n = 4
//A B C D
//A B C D
//A B C D
//A B C D
#include<iostream>
using namespace std;
int main(){
	
	int n;
	cout<<"Enter Any Number: ";
	cin>>n;
	
	
	for(int i = 1; i<=n; i++){
	char ch = 'A';
		for(int j = 1; j<=n; j++){
			cout<<ch <<" ";
			ch = ch+1;
		}
	cout<<endl;
	}
	
}
