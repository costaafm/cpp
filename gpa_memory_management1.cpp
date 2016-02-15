#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    cout << "Enter total number of students: ";
    cin >> n;
    float* ptr;
    
    ptr = new float[n];       // memory allocation for n number of floats

    cout << "Enter GPA of students." <<endl;
    for (int i = 0; i < n; ++i) {
        cout << "Student" << i+1 << ": ";
        cin >> *(ptr + i);
    }
    cout << "\nDisplaying GPA of students." << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Student" << i+1 << " :" << *(ptr + i) << endl;
    }

    delete [] ptr;    // ptr memory is released

    return 0;
}