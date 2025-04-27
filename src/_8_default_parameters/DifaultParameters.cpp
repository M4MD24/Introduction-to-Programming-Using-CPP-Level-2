#include <iostream>
using namespace std;

long sumNumbers(
    const int FIRST_NUMBER,
    const int SECOND_NUMBER,
    const int THIRD_NUMBER = 0,
    const int FOURTH_NUMBER = 0
) { return FIRST_NUMBER + SECOND_NUMBER + THIRD_NUMBER + FOURTH_NUMBER; }

int main() {
    cout << sumNumbers(
        10,
        20,
        30
    );
}