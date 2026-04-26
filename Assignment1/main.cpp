// Assignment No.  1

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string name = "Imtiaz Ali";
    string stuId = "BC260200954";

    cout << "==============================\n";
    cout << "Name  : " << name << endl;
    cout << "Student ID : " << stuId << endl;
    cout << "==============================\n";

    // Extract numeric part
    string numericPart = "";

    for (char ch : stuId)
    {
        if (isdigit(ch)) {
            numericPart += ch;
        }
    }

    cout << "\nDigits in ID: ";
    for (char ch : numericPart) {
        cout << ch << " ";
    }

    cout << "\nReversed numeric part: ";
    for (int i = numericPart.length() - 1; i >= 0; i--) {
        cout << numericPart[i] << " ";
    }

    bool present[10] = {false};
    int maxDigit = 0;
    int minDigit = 9;

    for (char ch : numericPart) {
        int digit = ch - '0';
        present[digit] = true;

        if (digit > maxDigit) maxDigit = digit;
        if (digit < minDigit) minDigit = digit;
    }

    cout << "\n\nAbsent digits: ";
    for (int i = 0; i < 10; i++) {
        if (!present[i]) {
            cout << i << " ";
        }
    }

    cout << "\n\nEven digits: ";
    for (char ch : numericPart) {
        int digit = ch - '0';
        if (digit % 2 == 0) cout << digit << " ";
    }

    cout << "\nOdd digits: ";
    for (char ch : numericPart) {
        int digit = ch - '0';
        if (digit % 2 != 0) cout << digit << " ";
    }

    cout << "\n\nLargest digit: " << maxDigit;
    cout << "\nSmallest digit: " << minDigit;

    cout << "\n\nMultiplication Table of " << maxDigit << ":\n";

    if (maxDigit == 0) {
        cout << "Cannot generate table for 0.";
    } else {
        for (int i = 1; i <= 10; i++) {
            cout << maxDigit << " x " << i << " = " << (maxDigit * i) << endl;
        }
    }

    cout << "\n==============================\n";

    return 0;
}