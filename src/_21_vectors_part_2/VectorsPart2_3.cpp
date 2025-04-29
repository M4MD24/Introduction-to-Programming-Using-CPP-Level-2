#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector numbers{1, 2, 3, 4, 5};

    // declare iterator
    vector<int>::iterator numbersIterator;

    // use iterator with for loop
    for (
        numbersIterator = numbers.begin();
        numbersIterator != numbers.end();
        numbersIterator++
    )
        cout << *numbersIterator << " ";
}