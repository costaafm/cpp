#include <iostream>
using namespace std;

class Test {
private:
    int n;
    float *ptr;
public:
    
    Test() {
        cout << "Enter total number of students: ";
        cin >> n;
        
        ptr = new float[n];
        
        cout << "Enter GPA of students." <<endl;
        for (int i = 0; i < n; ++i) {
            cout << "Student" << i+1 << ": ";
            cin >> *(ptr + i);
        }
    }
    
    ~Test() {
        delete[] ptr;
    }

    void Display() {
        cout << "\nDisplaying GPA of students." << endl;
        for (int i = 0; i < n; ++i) {
            cout << "Student" << i+1 << " :" << *(ptr + i) << endl;
        }
    }
    
};
int main() {
    Test s;
    s.Display();
    return 0;
}