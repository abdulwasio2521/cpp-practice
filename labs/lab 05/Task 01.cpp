#include <iostream>
using namespace std;
int main() {
    char ch;
    char choice;
    do {
        cout << "Enter an alphabet: ";
        cin >> ch;

        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cout << ch << " is a vowel." << endl;
                break;
            default:
                if ((ch >= 'a' && ch <= 'z'))
                    cout << ch << " is a consonant." << endl;
                else
                    cout << ch << " is not an alphabet!" << endl;
        }
        cout << "\nDo you want to check another character? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "\nProgram ended. Thank you!" << endl;
    return 0;
}
