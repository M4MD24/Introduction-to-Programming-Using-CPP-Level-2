#include <fstream>
using namespace std;

int main() {
    fstream file;
    const string PATH = "src/_24_files/_24_2_append_data/File.txt";
    file.open(
        PATH,
        ios::out | ios::app
    );
    if (file.is_open()) {
        file << "\nMy age 22 (Hijri)";
        file.close();
    }
}