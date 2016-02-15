#include <iostream>

using namespace std;

struct  person {
    char name[50];
    int age;
    float salary;
};

person getData(person); 
void displayData(person); 

int main() {

    person p;

    p = getData(p);   
    displayData(p);

    return 0;
}

person getData(person p1) {

    cout << "Enter Full name: ";
    cin.get(p1.name, 50);
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;
    return p1;

}

void displayData(person p1) {

    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p1.name << endl;
    cout <<"Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary;
    
}