#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void loadFileData(
    const string& PATH,
    fstream& file,
    vector<string>& fileContent
) {
    file.open(
        PATH,
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
            fileContent.push_back(
                line
            );
    }
    file.close();
}

void modifyFileContent(
    const vector<string>& FILE_CONTENT,
    const string& PATH,
    fstream& file,
    const string& TARGET_LINE_VALUE,
    const string& ALTERNATIVE_LINE_VALUE
) {
    file.open(
        PATH,
        ios::out
    );
    if (file.is_open())
        for (const string& LINE : FILE_CONTENT)
            if (LINE == TARGET_LINE_VALUE)
                file << ALTERNATIVE_LINE_VALUE << endl;
            else
                file << LINE << endl;
    file.close();
}

void printFileContent(
    const string& PATH,
    fstream& file
) {
    file.open(
        PATH,
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
    }
    file.close();
}

int main() {
    const string PATH = "src/_24_files/_24_6_modify_record/File.txt";
    fstream file;
    vector<string> fileContent;
    loadFileData(
        PATH,
        file,
        fileContent
    );
    modifyFileContent(
        fileContent,
        PATH,
        file,
        "6",
        "123456789"
    );
    printFileContent(
        PATH,
        file
    );
}