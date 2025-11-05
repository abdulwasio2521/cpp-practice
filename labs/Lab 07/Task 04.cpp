#include<iostream>
using namespace std;

	struct d{
		int feet;
		int inches;
	};

int main(){
	
	d d1, d2, sum;
	
	d1.feet = 5;
	d1.inches = 8;
	
	d2.feet = 9;
	d2.inches = 10;
	
	sum.feet = d1.feet+d2.feet;
	sum.inches = d1.inches+d2.inches;
	
	if(sum.inches>=12){
		sum.feet+=sum.inches/12;
		sum.inches=sum.inches%12;
	}
	
	cout<<"Sum = " <<sum.feet <<" Feets and " <<sum.inches <<" inches";
	
}
