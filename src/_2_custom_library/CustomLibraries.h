#pragma once

#include <iostream>
#include <cmath>
using namespace std;

namespace ReadInput {
    inline char readCharacter(const string& INPUT_MESSAGE) {
        cout << INPUT_MESSAGE << endl;
        char character;
        cin >> character;
        return character;
    }

    inline int readNumber(const string& INPUT_MESSAGE) {
        cout << INPUT_MESSAGE << endl;
        int number;
        cin >> number;
        return number;
    }

    inline string readWord(const string& INPUT_MESSAGE) {
        cout << INPUT_MESSAGE << endl;
        string text;
        cin >> text;
        return text;
    }

    inline string readText(const string& INPUT_MESSAGE) {
        cout << INPUT_MESSAGE << endl;
        string text;
        getline(
            cin,
            text
        );
        return text;
    }
}

namespace LawOfSHape {
    inline double rectangleArea(
        const double LENGTH,
        const double WIDTH
    ) { return LENGTH * WIDTH; }

    inline double rectanglePerimeter(
        const double LENGTH,
        const double WIDTH
    ) { return 2 * (LENGTH + WIDTH); }

    inline double circleArea(const double RADIUS) { return M_PI * RADIUS * RADIUS; }

    inline double circlePerimeter(const double RADIUS) { return 2 * M_PI * RADIUS; }

    inline double triangleArea(
        const double BASE_LENGTH,
        const double HEIGHT
    ) { return 0.5 * BASE_LENGTH * HEIGHT; }

    inline double trianglePerimeter(
        const double FIRST_SIDE,
        const double SECOND_SIDE,
        const double THIRD_SIDE
    ) { return FIRST_SIDE + SECOND_SIDE + THIRD_SIDE; }
}