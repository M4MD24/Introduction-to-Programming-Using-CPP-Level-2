#include <iostream>
#include <cctype>
using namespace std;

int main() {
    const char FIRST_LETTER = toupper(
        'a'
    );
    const char SECOND_LETTER = tolower(
        'A'
    );

    cout << "converting a to A: " << FIRST_LETTER << endl;
    cout << "converting A to a: " << SECOND_LETTER << endl;

    // Uppercase (A to Z)
    cout << "isupper('A') " << isupper(
        'A'
    ) << endl;

    // Lowercase (a to z)
    cout << "islower('A') " << islower(
        'A'
    ) << endl;

    // Digits (0 to 9)
    cout << "isdigit('A') " << isdigit(
        'A'
    ) << endl;

    // punctuation characters are !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~
    cout << "ispunct('A') " << ispunct(
        'A'
    );
}