#include <iostream>
using namespace std;

long powerNumber(
    const int BASE,
    const short EXPONENT
) {
    if (EXPONENT == 1)
        return BASE;
    return BASE * powerNumber(
        BASE,
        static_cast<short>(EXPONENT - 1)
    );
}

int main() {
    const int BASE = 2;
    const short EXPONENT = 3;
    cout << BASE << '^' << EXPONENT << " = " << powerNumber(
        2,
        3
    );
}