#include <limits>
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

int readNumber(
    const string& INPUT_MESSAGE
) {
    int number;
    do {
        cout << INPUT_MESSAGE << endl;
        cin >> number;
    } while (!isValidNumber());
    return number;
}

void readColors(
    const int COUNT_OF_COLORS,
    string* colorsAddress
) {
    cout << "Enter colors without '#'" << endl;
    for (int index = 0; index < COUNT_OF_COLORS; index++) {
        cout << "Enter Color \"" << index + 1 << "\":" << endl;
        cin >> *(colorsAddress + index);
    }
}

void printColors(
    const int COUNT_OF_COLORS,
    const string* COLORS_ADDRESS
) {
    cout << "Colors:" << endl;
    for (int index = 0; index < COUNT_OF_COLORS; index++)
        cout << "Color \"" << index + 1 << "\": " << *(COLORS_ADDRESS + index) << endl;
}

int main() {
    const int COUNT_OF_COLORS = readNumber(
        "Enter Count of Colors:"
    );

    string* colorsAddress = new string[COUNT_OF_COLORS];

    readColors(
        COUNT_OF_COLORS,
        colorsAddress
    );

    printColors(
        COUNT_OF_COLORS,
        colorsAddress
    );

    delete[] colorsAddress;
}