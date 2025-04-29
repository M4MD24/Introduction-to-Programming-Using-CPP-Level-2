#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "My Name is Mohamed, I'm Android Developer.";

    cout << text.length() << endl;

    cout << text.at(
        3
    ) << endl;

    text.append(
        " @M4MD24"
    );
    cout << text << endl;

    text.insert(
        18,
        " 1424 "
    );
    cout << text << endl;

    cout << text.substr(
        19,
        4
    ) << endl;

    text.push_back(
        '.'
    );
    cout << text << endl;

    text.pop_back();
    cout << text << endl;

    cout << text.find(
        "mohamed"
    ) << endl;

    cout << text.find(
        "mohamed"
    ) << endl;
    if (text.find(
        "mohamed"
    ) == string::npos)
        cout << "mohamed isn't found";

    text.clear();
    cout << text;
}