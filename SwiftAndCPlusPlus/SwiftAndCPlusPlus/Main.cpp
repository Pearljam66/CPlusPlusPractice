//
//  Hello.cpp
//  SwiftAndCPlusPlus
//
//  Created by Sarah Clark on 4/16/24.
//

// Lesson 2.6
// Using cin and cout to display number and text entered by a user.
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare a variable to store an integer.
    int inputNumber;

    cout << "Enter an integer: ";

    // Store an integer given user input.
    cin >> inputNumber;

    // The same with text i.e. string data
    cout << "Enter your name: ";
    string inputName;
    cin >> inputName;

    cout << inputName << " entered " << inputNumber << endl;

    return 0;
}

