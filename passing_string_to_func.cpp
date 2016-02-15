#include <iostream>

using namespace std;

void display(char s[]);

int main() {
    char str[100];
    cout<<"Enter a string: ";
    cin.get(str, 100);
    display(str);
    return 0;
}

void display(char s[]) {
    cout<<"You entered: "<<s;
}