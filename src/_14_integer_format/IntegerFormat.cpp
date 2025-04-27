#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    const int PAGE = 1,
              TOTAL_PAGES = 10;

    // print string and int variable
    printf(
        "The page number = %d \n",
        PAGE
    );
    printf(
        "You are in Page %d of %d \n",
        PAGE,
        TOTAL_PAGES
    );

    //Width specification
    printf(
        "The page number = %0*d \n",
        2,
        PAGE
    );
    printf(
        "The page number = %0*d \n",
        3,
        PAGE
    );
    printf(
        "The page number = %0*d \n",
        4,
        PAGE
    );
    printf(
        "The page number = %0*d \n",
        5,
        PAGE
    );

    const int FIRST_NUMBER = 20,
              SECOND_NUMBER = 30;
    printf(
        "The Result of %d + %d = %d",
        FIRST_NUMBER,
        SECOND_NUMBER,
        FIRST_NUMBER + SECOND_NUMBER
    );
}