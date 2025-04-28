#include <iostream>
using namespace std;

int main() {
    int number = 10;
    cout << "number value = " << number << endl;
    cout << "number address = " << &number << endl;

    int* numberAddress = &number;
    cout << "Pointer Value = " << numberAddress << endl;
    cout << "Value of the address that (numberAddress) is pointing to is "
        << *numberAddress << endl;
    /* (*) Is Sign of Dereferences */

    *numberAddress = 20;
    cout << number << endl;
    cout << *numberAddress << endl;

    number = 30;
    cout << number << endl;
    cout << *numberAddress << endl;
}