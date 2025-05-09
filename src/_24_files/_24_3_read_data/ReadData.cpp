#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void PrintFileContent(
    const string& FileName
) {
    fstream file;
    file.open(
        FileName,
        ios::in
    );
    if (file.is_open()) {
        string line;
        while (
            getline(
                file,
                line
            )
        )
            cout << line << endl;
        file.close();
    }
}

int main() {
    const string PATH = "src/_24_files/_24_3_read_data/File.txt";
    PrintFileContent(
        PATH
    );
}