#include <iostream>
using namespace std;

void printNumbersFromStartToEnd(
    const int START_NUMBER,
    const int END_NUMBER
) {
    if (START_NUMBER >= END_NUMBER) {
        cout << START_NUMBER << endl;
        printNumbersFromStartToEnd(
            START_NUMBER - 1,
            END_NUMBER
        );
    }
}

int main() {
    printNumbersFromStartToEnd(
        5,
        1
    );
}