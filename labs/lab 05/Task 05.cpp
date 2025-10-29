#include <iostream>
using namespace std;

int main() {
    float price1, price2, price3;

    cout << "Enter the price of product 1: ";
    cin >> price1;
    cout << "Enter the price of product 2: ";
    cin >> price2;
    cout << "Enter the price of product 3: ";
    cin >> price3;

    if (price1 <= price2 && price1 <= price3) {
        cout << "Product 1 is the cheapest with price: " << price1 << endl;
    }
    else if (price2 <= price1 && price2 <= price3) {
        cout << "Product 2 is the cheapest with price: " << price2 << endl;
    }
    else {
        cout << "Product 3 is the cheapest with price: " << price3 << endl;
    }

    return 0;
}
