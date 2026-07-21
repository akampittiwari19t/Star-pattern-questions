#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    for(a = 1; a <= 5; a++) {
        for(c = a; c <5; c++)
            cout << "  ";
        if(a == 1) {
            cout << "*";
        }
        else if(a == 5) {
            for(b = 1; b <= 9; b++)
                cout << "* ";
        }
        else {
            cout << "*";
            for(b = 1; b <= 2*a-3; b++)
            cout << "  ";
            cout << "*";
            
        }
        cout << endl;
    }
   
  
}