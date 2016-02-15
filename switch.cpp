/* C++ program to demonstrate working of switch Statement */
/* C++ program to built simple calculator using switch Statement */
#include <iostream>

using namespace std;

int main() 
{
    char o;
    float num1,num2;
    cout<<"Select an operator either + or - or * or / \n";
    cin>>o;
    cout<<"Enter two operands: ";
    cin>>num1>>num2;
    
    switch(o) {
        case '+':
            cout<<num1<<" + "<<num2<<" = "<<num1+num2;
            break;
        case '-':
            cout<<num1<<" - "<<num2<<" = "<<num1-num2;
            break;
        case '*':
            cout<<num1<<" * "<<num2<<" = "<<num1*num2;
            break;
        case '/':
            cout<<num1<<" / "<<num2<<" = "<<num1/num2;
            break;
        default:
            
            /* If operator is other than +, -, * or /, error message is shown */
            printf("Error! operator is not correct");
            break;
    }
    
    return 0;
}