#include <iostream>
using namespace std;

void increaseNumber(
    int& number
) { number++; }

int main() {
    int number = 10;
    increaseNumber(
        number
    );
    cout << "Number after calling increaseNumber = " << number;
}