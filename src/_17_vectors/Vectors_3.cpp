#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<short> numbers;
    numbers.push_back(
        10
    );
    numbers.push_back(
        20
    );
    numbers.push_back(
        30
    );
    numbers.push_back(
        40
    );
    numbers.push_back(
        50
    );

    cout << "First Element: " << numbers.front() << endl;
    cout << "Last Element: " << numbers.back() << endl;
    cout << "Size: " << numbers.size() << endl;
    cout << "Capacity: " << numbers.capacity() << endl;

    numbers.clear();
    cout << "Empty: " << numbers.empty();
}