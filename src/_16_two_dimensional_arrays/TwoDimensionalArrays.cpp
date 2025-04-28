#include <iomanip>
#include <iostream>
using namespace std;

void printNumbers(
    const short ROWS,
    const short COLUMNS,
    const short NUMBERS[4][3]
) {
    cout << "Numbers:" << endl;
    for (int row = 0; row < ROWS; row++) {
        for (int column = 0; column < COLUMNS; column++)
            cout << setw(
                2
            ) << NUMBERS[row][column] << " ";
        cout << endl;
    }
}

int main() {
    const short ROWS = 4,
                COLUMNS = 3;
    const short NUMBERS[ROWS][COLUMNS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    printNumbers(
        ROWS,
        COLUMNS,
        NUMBERS
    );
}