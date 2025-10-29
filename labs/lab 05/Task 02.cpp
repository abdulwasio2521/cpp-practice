#include<iostream>
using namespace std;

int main() {
    int age;
    string country;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your country: ";
    cin>>country;


    if (age >= 18) {
        if (country == "Pakistan" || country == "pakistan") {
            cout << "You are eligible for CNIC." << endl;
        } else {
            cout << "You are eligible for CNICOP." << endl;
        }
    } else {
        cout << "You are not eligible for CNIC." << endl;
    }

    return 0;
}
