#include <iostream>
using namespace std;

int main() {
    int firstNumber = 10;
    int& secondNumber = firstNumber;

    cout << &firstNumber << endl;
    cout << &secondNumber << endl;

    cout << firstNumber << endl;
    cout << secondNumber << endl;

    secondNumber = 20;
    cout << firstNumber << endl;
    cout << secondNumber << endl;

    firstNumber = 30;
    cout << firstNumber << endl;
    cout << secondNumber;
}