//
//  Hello.cpp
//  SwiftAndCPlusPlus
//
//  Created by Sarah Clark on 4/16/24.
//

// Lesson 3.1
#include <iostream>
using namespace std;

int firstNumber  = 0;
int secondNumber = 0;
int multiplicationResult = 0;

void multiplyNumbers() {
    cout << "Enter the first number: ";
    cin >> firstNumber;

    cout << "Enter the second number: ";
    cin >> secondNumber;

    multiplicationResult = firstNumber * secondNumber;

    cout << firstNumber << " x " << secondNumber;
    cout << " = " << multiplicationResult << endl;
}

int main() {
    cout << "This program multiplies two numbers" << endl;

    multiplyNumbers();

    cout << "Displaying from main(): ";

    cout << firstNumber << " x " << secondNumber;
    cout << " = " << multiplicationResult << endl;

    return 0;
}
