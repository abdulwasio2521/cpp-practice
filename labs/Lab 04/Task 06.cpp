#include<iostream>
using namespace std;
int main(){
	int pancakes [5];
	int maxpancakes = 0;
	int maxperson = 0;
	
	for(int i=0; i<5; i++) {
		cout<<"Enter Number Of Pancakes Eaten By Person " << i+1 <<" :";
		cin>>pancakes [i];
		maxpancakes = pancakes[0];
	}
	for (int i = 1; i < 5; i++) {
        if (pancakes[i] > maxpancakes) {
            maxpancakes = pancakes[i];
            maxperson = i;
        }
    }
    cout << "\nPerson " << maxperson + 1 << " ate the most pancakes (" << maxpancakes << ")." << endl;
}
