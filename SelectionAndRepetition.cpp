// SelectionAndRepetition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cassert>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    int integer1;
    char operation;
    int integer2;

    while (true) {
        cout << "Enter first integer: " << endl;
        cin >> integer1;
        cout << "Enter operator (+ - / *): " << endl;
        cin >> operation;
        if (!(operation == '+' || operation == '-' || operation == '/' || operation == '*')) {
            cout << "Operation not supported, try again. " << endl;
            continue;
        }
        cout << "Enter second integer: " << endl;
        cin >> integer2;
        if (integer2 == 0 && operation == '/') {
            cout << "Division by zero is not possible, try again. " << endl;
            continue;
        }
        break;
    }
    
    double output;

    if (operation == '+') {
        output = integer1 + integer2;
    }
    else if (operation == '-') {
        output = integer1 + integer2;
    }
    else if (operation == '/') {
        output = (double) integer1 / (double) integer2;
    }
    else {
        output = integer1 * integer2;
    }

    cout << "Output: ";
    cout << integer1;
    cout << " ";
    cout << operation;
    cout << " ";
    cout << integer2;
    cout << " = ";
    cout << output;
}