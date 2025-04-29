#include <iostream>
#include <vector>
using namespace std;

void printNumbers(
    const vector<int>& NUMBERS
) {
    cout << "Numbers: ";
    for (const int& number : NUMBERS) {
        cout << number << " ";
    }
}

void updateNumbers(
    vector<int>& numbers
) {
    for (int& number : numbers)
        number = 20;
    numbers[1] = 40;
    numbers.at(
        2
    ) = 80;
    numbers.at(
        4
    ) = 90;
}

int main() {
    vector numbers{1, 2, 3, 4, 5};

    printNumbers(
        numbers
    );

    updateNumbers(
        numbers
    );

    cout << "\n\nAfter Update Numbers: " << endl;
    printNumbers(
        numbers
    );
}