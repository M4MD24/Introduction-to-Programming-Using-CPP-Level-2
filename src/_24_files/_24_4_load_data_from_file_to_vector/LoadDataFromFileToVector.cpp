#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void LoadDataFromFileToVector(
    const string& FILE_PATH,
    vector<string>& fileContent
) {
    fstream file;
    file.open(
        FILE_PATH,
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
        file.close();
    }
}

int main() {
    vector<string> fileContent;
    const string PATH = "src/_24_files/_24_4_load_data_from_file_to_vector/File.txt";
    LoadDataFromFileToVector(
        PATH,
        fileContent
    );
    for (const string& LINE : fileContent)
        cout << LINE << endl;
}