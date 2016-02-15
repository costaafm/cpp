// C++ Program to demonstrate working of break statement

#include <iostream>

using namespace std;

int main() {
    float number, sum = 0.0;

    while (true) {     // test expression is always true
        cout<<"Enter a number: ";
        cin>>number;
        
        if (number != 0.0) {
            sum += number;
        }
        else {
            break;    // terminating the loop if number equals to 0.0
        }

    }
    cout<<"Sum = "<<sum;
    return 0;
}