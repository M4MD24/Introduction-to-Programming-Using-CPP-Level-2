// #pragma warning(disable : 4996)
#include <ctime>
#include <iostream>
using namespace std;

int main() {
    const time_t CURRENT_LOCAL_TIME = time(
        nullptr
    ); // get time now

    const char* LOCAL_TIME_TEXT = ctime(
        &CURRENT_LOCAL_TIME
    ); // convert in string form
    cout << "Local date and time is: " << LOCAL_TIME_TEXT << "\n";

    // converting now to tm struct for UTC date/time
    const tm* UTC_TIME_STRUCTURE = gmtime(
        &CURRENT_LOCAL_TIME
    );

    LOCAL_TIME_TEXT = asctime(
        UTC_TIME_STRUCTURE
    );

    cout << "UTC date and time is: " << LOCAL_TIME_TEXT;
}