#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstNumSt, secondNumSt;
    int firstNum, secondNum;
    int sum;

    while (true) {
        cout << "Type first number: ";
        cin >> firstNumSt;
        if (firstNumSt == "end") {
            break; // Exit the loop if "end" is entered
        }
        try {
            firstNum = stoi(firstNumSt);
        } catch (...) {
            cout << "Must be a number!" << endl;
            continue; // Go to the next iteration of the loop
        }

        cout << "Type second number: ";
        cin >> secondNumSt;
        if (secondNumSt == "end") {
            break; // Exit the loop if "end" is entered
        }
        try {
            secondNum = stoi(secondNumSt);
        } catch (...) {
            cout << "Must be a number!" << endl;
            continue; // Go to the next iteration of the loop
        }

        sum = firstNum + secondNum;
        cout << "Sum is: " << sum << endl;
    }

    return 0;
}
