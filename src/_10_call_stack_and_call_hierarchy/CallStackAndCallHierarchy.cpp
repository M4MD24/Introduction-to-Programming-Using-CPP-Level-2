#include <iostream>
using namespace std;

void function4() { cout << "I'm function 4"; }

void function3() { function4(); }

void function2() { function3(); }

void function1() { function2(); }

int main() { function1(); }