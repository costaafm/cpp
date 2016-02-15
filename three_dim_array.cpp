#include <iostream>

using namespace std;

int main() {
    int test[2][3][2];    // this array can store 12 elements
    cout<<"Enter 12 values: \n";
    for(int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            for(int k = 0; k < 2; ++k ) {
                cin>>test[i][j][k];
            }
        }
    }
    cout<<"\nDisplaying Value stored:"<<endl;
/* Displaying the values with proper index. */
    for(int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            for(int k = 0; k < 2; ++k ) {
                cout<< "test["<<i<<"]["<<j<<"]["<<k<<"] = "<< test[i][j][k]<<endl;
            }
        }
    }

    return 0;
}