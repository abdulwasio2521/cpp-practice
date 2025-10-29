#include <iostream>
using namespace std;

int main() {
    float marks;

    cout << "Enter marks obtained by the student: ";
    cin >> marks;

    if (marks >= 85 && marks <= 100) {
        cout << "Grade: A+" << endl;
    }
    else if (marks >= 80 && marks < 85) {
        cout << "Grade: A" << endl;
    }
    else if (marks >= 75 && marks < 80) {
        cout << "Grade: B+" << endl;
    }
    else if (marks >= 70 && marks < 75) {
        cout << "Grade: B" << endl;
    }
    else if (marks >= 65 && marks < 70) {
        cout << "Grade: C+" << endl;
    }
    else if (marks >= 60 && marks < 65) {
        cout << "Grade: C" << endl;
    }
    else if (marks >= 55 && marks < 60) {
        cout << "Grade: D+" << endl;
    }
    else if (marks >= 50 && marks < 55) {
        cout << "Grade: D" << endl;
    }
    else if (marks < 50) {
        cout << "Grade: F" << endl;
    }
    else {
        cout << "Invalid marks entered!" << endl;
    }

    return 0;
}
