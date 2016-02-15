#include <iostream>

using namespace std;

struct  person {
    char name[50];
    int age;
    float salary;
};

void displayData(person);   // Function declaration

int main() {

    person p;

    cout << "Enter Full name: ";
    cin.get(p.name, 50);
    cout << "Enter age: ";
    cin >> p.age;
    cout << "Enter salary: ";
    cin >> p.salary;

    displayData(p);    // Function call with structure variable as arugment

    return 0;
}

void displayData(person p1) {

    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p1.name << endl;
    cout <<"Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary;
    
}