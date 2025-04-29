#include <fstream>
using namespace std;

int main() {
    fstream file;
    const string PATH = "src/_24_files/_24_1_write_data/File.txt";
    file.open(
        PATH,
        ios::out
    );
    if (file.is_open()) {
        file << "I'm Mohamed Sadawy" << endl;
        file << "Android Developer";
        file.close();
    }
}