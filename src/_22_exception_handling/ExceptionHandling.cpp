#include <iostream>
#include <vector>
using namespace std;

int main() {
    const vector NUMBERS{1, 2, 3, 4, 5};
    try {
        cout << NUMBERS.at(
            5
        );
    } catch (...) {
        cout << "Out of Bound!";
    }
}