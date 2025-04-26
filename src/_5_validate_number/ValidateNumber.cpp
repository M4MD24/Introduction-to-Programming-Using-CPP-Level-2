#include <iostream>
#include <limits>
using namespace std;

int readNumber() {
    int number;
    bool valid;
    do {
        cout << "Enter Number:" << endl;
        cin >> number;
        valid = !cin.fail();
        if (!valid) {
            cin.clear();
            cin.ignore(
                numeric_limits<streamsize>::max(),
                '\n'
            );
        }
    } while (!valid);
    return number;
}

int main() {
    const int NUMBER = readNumber();
    cout << "Your Number is: " << NUMBER;
}