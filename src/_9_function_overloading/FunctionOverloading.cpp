#include <iostream>
using namespace std;

long sumNumbers(
    const int FIRST_NUMBER,
    const int SECOND_NUMBER
) { return FIRST_NUMBER + SECOND_NUMBER; }

long sumNumbers(
    const int FIRST_NUMBER,
    const int SECOND_NUMBER,
    const int THIRD_NUMBER
) { return FIRST_NUMBER + SECOND_NUMBER + THIRD_NUMBER; }

long sumNumbers(
    const int FIRST_NUMBER,
    const int SECOND_NUMBER,
    const int THIRD_NUMBER,
    const int FOURTH_NUMBER
) { return FIRST_NUMBER + SECOND_NUMBER + THIRD_NUMBER + FOURTH_NUMBER; }

int main() {
    cout << "By 2 Parameters = " << sumNumbers(
        10,
        20
    ) << endl;

    cout << "By 3 Parameters = " << sumNumbers(
        10,
        20,
        30
    ) << endl;

    cout << "By 4 Parameters = " << sumNumbers(
        10,
        20,
        30,
        40
    );
}