//
//  Hello.cpp
//  SwiftAndCPlusPlus
//
//  Created by Sarah Clark on 4/16/24.
//

// Lesson 2.4
// Declaring, defining, and calling a function that demonstrates capabilities of std::cout.
#include <iostream>
using namespace std;

int demoConsoleOutput();

int main() {
    demoConsoleOutput();

    return 0;
}

int demoConsoleOutput() {
    cout << "This is a simple string literal" << endl;
    cout << "Writing number five: " << 5 << endl;
    cout << "Performing division 10 / 5 = " << 10 / 5 << endl;
    cout << "Pi is 22 / 7 = " << 22.0 / 7 << endl;

    return 0;
}
