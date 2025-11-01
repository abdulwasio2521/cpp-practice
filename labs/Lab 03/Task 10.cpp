#include <iostream>
using namespace std;

int main() {
    int a = 12;
    int b = 5;

    cout << "a = " << a << ", b = " << b << endl;

    // Bitwise AND
    cout << "a & b = " << (a & b) << endl; 

    // Bitwise OR
    cout << "a | b = " << (a | b) << endl;

    // Bitwise XOR
    cout << "a ^ b = " << (a ^ b) << endl;

    // Bitwise NOT
    cout << "~a = " << (~a) << endl;

    // Left Shift
    cout << "a << 1 = " << (a << 1) << endl;

    // Right Shift
    cout << "a >> 1 = " << (a >> 1) << endl;

    return 0;
}
