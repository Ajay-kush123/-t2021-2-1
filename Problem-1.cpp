#include <iostream>
#include <string>

using namespace std;

class Calculator {
public:
    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b != 0)
            return a / b;
        else {
            cout << "Error: Division by zero is not allowed." << endl;
            return 0.0;
        }
    }
};

int main() {
    Calculator calculator;

    double a, b;
    string operation;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;

    if (operation == "+")
        cout << "Result: " << calculator.add(a, b) << endl;
    else if (operation == "-")
        cout << "Result: " << calculator.subtract(a, b) << endl;
    else if (operation == "*")
        cout << "Result: " << calculator.multiply(a, b) << endl;
    else if (operation == "/")
        cout << "Result: " << calculator.divide(a, b) << endl;
    else
        cout << "Invalid operation entered." << endl;

    return 0;
}
