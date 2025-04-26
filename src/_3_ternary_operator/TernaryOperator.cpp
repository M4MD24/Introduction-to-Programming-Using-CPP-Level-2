#include <iostream>
using namespace std;

string checkNumberType(const int NUMBER) {
    return NUMBER == 0
               ? "Zero"
               : NUMBER > 0
               ? "Positive"
               : "Negative";
}

int readNumber() {
    cout << "Enter Number:" << endl;
    int number;
    cin >> number;
    return number;
}

int main() {
    cout << checkNumberType(readNumber());
}