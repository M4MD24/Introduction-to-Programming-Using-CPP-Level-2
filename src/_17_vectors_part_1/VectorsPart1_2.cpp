#include <limits>
#include <vector>
#include <iostream>
using namespace std;

struct FullName {
    string firstName,
           secondName;
};

struct Person {
    FullName fullName;
    short age;
    string job;
};

bool readMore() {
    cout << "Do you want to read more persons? (1/0)" << endl;
    bool readMore;
    cin >> readMore;
    return readMore;
}

void readFirstName(
    Person& person
) {
    cout << "Enter First Name:" << endl;
    cin >> person.fullName.firstName;
}

void readSecondName(
    Person& person
) {
    cout << "Enter Second Name:" << endl;
    cin.ignore();
    cin >> person.fullName.secondName;
}

void readFullName(
    Person& person
) {
    readFirstName(
        person
    );
    readSecondName(
        person
    );
}

bool isValidNumber() {
    const bool VALID = !cin.fail();
    if (!VALID) {
        cin.clear();
        cin.ignore(
            numeric_limits<streamsize>::max(),
            '\n'
        );
    }
    return VALID;
}

void readAge(
    Person& person
) {
    do {
        cout << "Enter age:" << endl;
        cin >> person.age;
    } while (!isValidNumber());
}

void readJob(
    Person& person
) {
    cout << "Enter Job:" << endl;
    cin.ignore();
    getline(
        cin,
        person.job
    );
}

Person readPerson() {
    Person person = {};
    readFullName(
        person
    );
    readAge(
        person
    );
    readJob(
        person
    );
    return person;
}

void readPersons(
    vector<Person>& persons
) {
    do
        persons.push_back(
            readPerson()
        );
    while (readMore());
}

void printIndex(
    const int& INDEX
) { cout << "Person (" << INDEX + 1 << ")" << endl; }

void printFullName(
    const FullName& FULL_NAME
) { cout << "Full Name: " << FULL_NAME.firstName + ' ' + FULL_NAME.secondName << endl; }

void printAge(
    const short& AGE
) { cout << "Age: " << AGE << endl; }

void printJob(
    const string& JOB
) { cout << "Job: " << JOB << endl; }

void printPersons(
    const vector<Person>& PERSONS
) {
    for (int index = 0; index < PERSONS.size(); ++index) {
        const Person& PERSON = PERSONS[index];
        printIndex(
            index
        );
        printFullName(
            PERSON.fullName
        );
        printAge(
            PERSON.age
        );
        printJob(
            PERSON.job
        );
    }
}

int main() {
    vector<Person> persons;
    readPersons(
        persons
    );
    printPersons(
        persons
    );
}