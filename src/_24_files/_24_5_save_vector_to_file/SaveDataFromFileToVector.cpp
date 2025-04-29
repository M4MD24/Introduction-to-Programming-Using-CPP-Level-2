#include <fstream>
#include <string>
#include <vector>
using namespace std;

void SaveVectorToFile(
    const string& PATH,
    const vector<string>& FILE_CONTENT
) {
    fstream file;
    file.open(
        PATH,
        ios::out
    );
    if (file.is_open()) {
        for (const string& LINE : FILE_CONTENT)
            if (!LINE.empty())
                file << LINE << endl;
        file.close();
    }
}

int main() {
    const vector<string> FILE_CONTENT{
        "Abdullah",
        "Abdulrahman",
        "Mohamed",
        "Ahmed",
        "Mahmoud"
    };
    const string PATH = "src/_24_files/_24_5_save_vector_to_file/File.txt";
    SaveVectorToFile(
        PATH,
        FILE_CONTENT
    );
}