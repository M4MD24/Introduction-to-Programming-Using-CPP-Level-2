#include <iostream>
using namespace std;

int main() {
    // declare an int pointer
    int* integerNumberAddress;

    // declare a float pointer
    float* floatNumberAddress;

    // dynamically allocate memory
    integerNumberAddress = new int;
    floatNumberAddress = new float;

    // assigning value to the memory
    *integerNumberAddress = 45;
    *floatNumberAddress = 58.35f;

    cout << *integerNumberAddress << endl;
    cout << *floatNumberAddress;

    // deallocate the memory
    delete integerNumberAddress;
    delete floatNumberAddress;
}