#include <iostream>
using namespace std;

int main() {
    float floatNumber = 10.5;
    int integerNumber = 50;

    void* voidPointer = &floatNumber;
    cout << voidPointer << endl;
    cout << *static_cast<float*>(voidPointer) << endl;

    voidPointer = &integerNumber;
    cout << voidPointer << endl;
    cout << *static_cast<int*>(voidPointer);
}