#include <iostream>
using namespace std;

int main() {
    int number = 10;
    cout << "Number Value = " << number << endl;
    cout << "Number Address = " << &number << endl;

    int* numberAddress = &number;
    cout << "Pointer Value = " << numberAddress;
}