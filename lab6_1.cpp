#include<iostream>
using namespace std;

int main() {
    int number, evenCount = 0, oddCount = 0;

    cout << "Enter an integer: ";
    while (cin >> number && number != 0) {
        if (number % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
        cout << "Enter an integer: ";
    }

    cout << "#Even numbers = " << evenCount << endl;
    cout << "#Odd numbers = " << oddCount << endl;

    return 0;
}