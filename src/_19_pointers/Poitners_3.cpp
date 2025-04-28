#include <iostream>
using namespace std;

void printNumbersAddresses(
    const int* NUMBERS_ADDRESS,
    const int NUMBER_COUNT
) {
    cout << "Addresses are:\n";
    for (int index = 0; index < NUMBER_COUNT; ++index)
        cout << NUMBERS_ADDRESS + index << endl;
}

void printNumbersValues(
    const int* NUMBERS_ADDRESS,
    const int NUMBER_COUNT
) {
    cout << "Values are: \n";
    for (int index = 0; index < NUMBER_COUNT; ++index)
        cout << *(NUMBERS_ADDRESS + index) << endl;
}

int main() {
    const int NUMBER_COUNT = 4;
    const int NUMBERS[NUMBER_COUNT] = {10, 20, 30, 40};
    const int* NUMBERS_ADDRESS = NUMBERS;

    printNumbersAddresses(
        NUMBERS_ADDRESS,
        NUMBER_COUNT
    );

    cout << endl;

    printNumbersValues(
        NUMBERS_ADDRESS,
        NUMBER_COUNT
    );
}