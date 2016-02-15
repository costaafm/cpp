#include <iostream>
using namespace std;

enum seasons { spring, summer, autumn, winter };

int main() {

    seasons s;
    s = autumn;   // Correct
    s = rainy;    // Error
    return 0;
}