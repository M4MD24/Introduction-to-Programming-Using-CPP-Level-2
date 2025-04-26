#include <iostream>
using namespace std;

int main() {
    const int NUMBERS[] = {1, 3, 56, 21, 3, 654, 8, 9, 7, 321, 0, 56, 8};
    for (const int NUMBER : NUMBERS)
        cout << NUMBER << endl;
}