#include <iostream>
using namespace std;

int sumTwoNumbers(
    const int FIRST_NUMBER,
    const int SECOND_NUMBER
) {
    int sum = 0;
    sum = FIRST_NUMBER + SECOND_NUMBER;
    return sum;
}

int main() {
    const int NUMBERS[5] = {200, 100, 50, 25, 30};
    int firstNumber,
        secondNumber,
        thirdNumber;
    firstNumber = 10;
    secondNumber = 20;
    firstNumber++;
    ++secondNumber;
    thirdNumber = firstNumber + secondNumber;
    cout << firstNumber << endl;
    cout << secondNumber << endl;
    cout << thirdNumber << endl;
    for (int index = 1; index <= 5; index++) {
        cout << index << endl;
        firstNumber = firstNumber + firstNumber * index;
    }
    thirdNumber = sumTwoNumbers(
        firstNumber,
        secondNumber
    );
    cout << thirdNumber;
}