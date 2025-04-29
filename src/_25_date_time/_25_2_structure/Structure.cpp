// #pragma warning(disable : 4996)
#include <ctime>
#include <iostream>
using namespace std;

void printTime(
    const tm* DATE_TIME_STRUCTURE
) {
    printf(
        "%02d:%02d:%02d\n",
        DATE_TIME_STRUCTURE->tm_hour,
        DATE_TIME_STRUCTURE->tm_min,
        DATE_TIME_STRUCTURE->tm_sec
    );
    cout << "Hours of daylight savings = " << DATE_TIME_STRUCTURE->tm_isdst;
}

void printDate(
    const tm* DATE_TIME_STRUCTURE
) {
    printf(
        "%02d-%02d-%02d\n",
        DATE_TIME_STRUCTURE->tm_year + 1900,
        DATE_TIME_STRUCTURE->tm_mon + 1,
        DATE_TIME_STRUCTURE->tm_mday
    );
    cout << "Week Day (Days since sunday) = " << DATE_TIME_STRUCTURE->tm_isdst << endl;
    cout << "Year Day (Days since Jan 1st) = " << DATE_TIME_STRUCTURE->tm_yday << endl;
}

int main() {
    const time_t LOCAL_DATE_TIME = time(
        nullptr
    );
    const tm* DATE_TIME_STRUCTURE = localtime(
        &LOCAL_DATE_TIME
    );
    printDate(
        DATE_TIME_STRUCTURE
    );
    printTime(
        DATE_TIME_STRUCTURE
    );
}