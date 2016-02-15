#include <iostream>

using namespace std;

int main() {
    int number;
    cout<< "Enter an integer: ";
    cin>> number;

    if ( number >= 0) {
        cout << "You entered a positive integer: "<<number<<endl;
    }
    
    else {
        cout<<"You entered a negative integer: "<<number<<endl;
    }

    cout<<"This statement is always executed because it's outside if...else statement.";
    return 0;
    
}

/* SYNTAX OF NESTED IF ... ELSE
if (test expression1){
     statement/s to be executed if test expression1 is true;
     }
     else if(test expression2) {
          statement/s to be executed if test expression1 is false and 2 is true;
     }
     else if (test expression 3) {
         statement/s to be executed if text expression1 and 2 are false and 3 is true;
     }
         .
         .
         .
     else {
            statements to be executed if all test expressions are false;
       }
*/
