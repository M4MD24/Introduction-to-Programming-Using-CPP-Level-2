#include <iostream>
using namespace std;

struct Person {
    string Name;
    string job;
};

int main() {
    Person person;
    person.Name = "Mohamed Sadawy";
    person.job = "Android Developer";
    cout << person.Name << endl;
    cout << person.job << endl;


    cout << endl;
    const Person* PERSON_ADDRESS = &person;
    cout << "Using Pointer:\n";
    cout << PERSON_ADDRESS->Name << endl;
    cout << PERSON_ADDRESS->job;
}