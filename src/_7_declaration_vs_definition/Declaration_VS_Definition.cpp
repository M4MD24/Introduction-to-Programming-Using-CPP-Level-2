#include <iostream>
using namespace std;

// Function Declaration
long add(
    int,
    int
);

int main() {
    add(
        10,
        20
    );
}

// Function Definition
long add(
    const int FIRST_NUMBER,
    const int SECOND_NUMBER
) { return FIRST_NUMBER + SECOND_NUMBER; }