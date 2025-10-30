#include<iostream>
using namespace std;
int main(){
	int pancakes [5];
	int minpancakes = 0;
	int minperson = 0;
	
	for(int i=0; i<5; i++) {
		cout<<"Enter Number Of Pancakes Eaten By Person " << i+1 <<" :";
		cin>>pancakes [i];
		minpancakes = pancakes[0];
	}
	for (int i = 1; i < 5; i++) {
        if (pancakes[i] < minpancakes) {
            minpancakes = pancakes[i];
            minperson = i;
        }
    }
    cout << "\nPerson " << minperson + 1 << " ate the least pancakes (" << minpancakes << ")." << endl;
}
