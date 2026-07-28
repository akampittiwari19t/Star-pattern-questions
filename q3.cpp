#include<iostream>
using namespace std;

int main() {
    int a, b;

    for(a = 1; a <= 4; a++) {
        for(b = 1; b <= 4; b++) {
            if(a == 1 || a == 4 || b == 1 || b == 4)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}