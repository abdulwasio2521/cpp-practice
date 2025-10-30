#include <iostream>
using namespace std;

int main() {
    int n, first = 1, second = 1, next;

    cout << "Enter the Number : ";
    cin >> n;

    cout << first << " " << second << " ";

    next = first + second;

    while (next <= n) {
        cout << next << " ";
        first = second;
        second = next;
        next = first + second;
    }

    return 0;
}
