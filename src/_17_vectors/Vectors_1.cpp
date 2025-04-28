#include <limits>
#include <vector>
#include <iostream>
using namespace std;

bool isValidNumber() {
    const bool VALID = !cin.fail();
    if (!VALID) {
        cin.clear();
        cin.ignore(
            numeric_limits<streamsize>::max(),
            '\n'
        );
    }
    return VALID;
}

int readNumber() {
    int number;
    do {
        cout << "Enter Number:" << endl;
        cin >> number;
    } while (!isValidNumber());
    return number;
}

bool readMore() {
    cout << "Do you want to read more numbers? (1/0)" << endl;
    bool readMore;
    cin >> readMore;
    return readMore;
}

void readNumbers(
    vector<int>& numbers
) {
    do
        numbers.push_back(
            readNumber()
        );
    while (readMore());
}

void printNumbers(
    const vector<int>& NUMBERS
) {
    for (const int NUMBER : NUMBERS)
        cout << NUMBER << endl;
}

int main() {
    vector<int> numbers;
    readNumbers(
        numbers
    );
    printNumbers(
        numbers
    );
}