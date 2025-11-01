#include <iostream>
using namespace std;

int main() {
    
	//Implicit Type Casting
    int a = 10;
    double b = a; 

    cout << "Implicit Type Casting:" << endl;
    cout << "a (int) = " << a << endl;
    cout << "b (double, converted from int) = " << b << endl;

    //Explicit Type Casting
    double pi = 3.14159;
    int x = (int)pi;              // C-style casting
    int y = static_cast<int>(pi); // C++ style casting

    cout << "\nExplicit Type Casting:" << endl;
    cout << "pi (double) = " << pi << endl;
    cout << "x (int, C-style cast) = " << x << endl;
    cout << "y (int, static_cast) = " << y << endl;

    return 0;
}
