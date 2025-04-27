#include <iostream>
using namespace std;

void function() {
    static int number = 1;
    cout << "Value of Number: " << number++ << '\n';
}

int main() {
    function();
    function();
    function();
}