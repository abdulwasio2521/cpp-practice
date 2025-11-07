#include<iostream>
using namespace std;
int main(){
	int a;
	
	cout<<"Enter Any Number: ";
	cin>>a;
	
	cout << "\nInitial value: " << a << endl;
    a += 5;  // add 5
    cout << "After += 5 : " << a << endl;
    a -=5;
    cout << "After -= 5 : " << a << endl;
    a *=5;
    cout << "After -= 5 : " << a << endl;
    a /=5;
    cout << "After -= 5 : " << a << endl;
}
