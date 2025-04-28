#include <iomanip>
#include <iostream>
using namespace std;

void printHeader(
    const string& LINE,
    const int COLOR_CODE_WIDTH,
    const int COLOR_NAME_WIDTH
) {
    cout << LINE << endl;
    cout << '|' << setw(
            COLOR_CODE_WIDTH
        ) << "Color Code" << '|'
        << setw(
            COLOR_NAME_WIDTH
        ) << "Color Name" << '|' << endl;
    cout << LINE << endl;
}

void printBody(
    const string& LINE,
    const int COLOR_CODE_WIDTH,
    const int COLOR_NAME_WIDTH
) {
    cout << '|' << setw(
            COLOR_CODE_WIDTH
        ) << "#32CD32" << '|'
        << setw(
            COLOR_NAME_WIDTH
        ) << "LimeGreen" << '|' << endl;
    cout << '|' << setw(
            COLOR_CODE_WIDTH
        ) << "#FF0000" << '|'
        << setw(
            COLOR_NAME_WIDTH
        ) << "Red" << '|' << endl;
    cout << '|' << setw(
            COLOR_CODE_WIDTH
        ) << "#00FF00" << '|'
        << setw(
            COLOR_NAME_WIDTH
        ) << "Green" << '|' << endl;
    cout << LINE << endl;
}

int main() {
    const string LINE = "---------------------------------";
    const int COLOR_CODE_WIDTH = 10,
              COLOR_NAME_WIDTH = 20;
    printHeader(
        LINE,
        COLOR_CODE_WIDTH,
        COLOR_NAME_WIDTH
    );
    printBody(
        LINE,
        COLOR_CODE_WIDTH,
        COLOR_NAME_WIDTH
    );
}