#include<iostream>
using namespace std;
int main(){
	int a;
	
	cout<<"Enter Any Number: ";
	cin>>a;
	
	(a % 2 == 0) ? cout << a << " is Even" << endl //a % 2 == 0 checks if number is divisble by 2
	: cout << a << " is Odd" << endl;
    return 0;
}
