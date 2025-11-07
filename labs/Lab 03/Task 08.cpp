#include <iostream>
using namespace std;

int main() {
    
    bool x;
    bool y;

    // Input boolean values (0 = false, 1 = true)
    cout << "Enter first boolean value (0 for false, 1 for true): ";
    cin >> x;
    cout << "Enter second boolean value (0 for false, 1 for true): ";
    cin >> y;

    // Applying logical operators
    cout << "\nResults of Logical Operations:" << endl;
    cout << "x AND y (x && y) = " << (x && y) << endl;
    cout << "x OR y  (x || y) = " << (x || y) << endl;
    cout << "NOT x   (!x) = " << (!x) << endl;
    cout << "NOT y   (!y) = " << (!y) << endl;

    return 0;
}
