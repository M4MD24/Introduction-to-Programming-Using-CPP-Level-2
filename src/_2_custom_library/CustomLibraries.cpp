#include "CustomLibraries.h"
using namespace ReadInput;
using namespace LawOfSHape;

void readInputs() {
    const string TEXT = readText("Enter Text:");
    const string WORD = readWord("Enter Word:");
    const int NUMBER = readNumber("Enter Number:");
    const char CHARACTER = readCharacter("Enter Character:");

    cout << TEXT << endl;
    cout << WORD << endl;
    cout << NUMBER << endl;
    cout << CHARACTER << endl;
}

void calculateAreaAndPerimeterRectangle() {
    cout << "Rectangle Area: " << rectangleArea(
        5.0,
        3.0
    ) << endl;
    cout << "Rectangle Perimeter: " << rectanglePerimeter(
        5.0,
        3.0
    ) << endl;
}

void calculateAreaAndPerimeterCircle() {
    cout << "Circle Area: " << circleArea(4.0) << endl;
    cout << "Circle Perimeter: " << circlePerimeter(4.0) << endl;
}

void calculateAreaAndPerimeterTriangle() {
    cout << "Triangle Area: " << triangleArea(
        6.0,
        4.0
    ) << endl;
    cout << "Triangle Perimeter: " << trianglePerimeter(
        3.0,
        4.0,
        5.0
    ) << endl;
}

void calculateAllShapes() {
    calculateAreaAndPerimeterRectangle();
    calculateAreaAndPerimeterCircle();
    calculateAreaAndPerimeterTriangle();
}

int main() {
    readInputs();
    cout << "-----------------------------------" << endl;
    calculateAllShapes();
}