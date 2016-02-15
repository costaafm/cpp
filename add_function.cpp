#include <iostream>

using namespace std;

int add(int, int);            //Function prototype(declaration)

int main() {
    int num1, num2, sum;
    cout<<"Enters two numbers to add: ";
    cin>>num1>>num2;
    sum = add(num1,num2);         //Function call
    cout<<"Sum = "<<sum;
    return 0;
}

int add(int a,int b) {            //Function declarator
    int add;
    add = a+b;
    return add;                 //Return statement
}
