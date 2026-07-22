#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    int temp;      // add this
    int num = 1;

    for(a = 1; a <= 4; a++) {
        for(c = a; c <= 4; c++)
        cout << " ";
        temp = num + a - 1;    // add this
        for(b = 1; b <= a; b++) {
            cout << temp; // num ki jagah temp
            temp--;
            if(b != a)
                cout << "*";
        }
        num = num + a;   // num++ ki jagah ye
        cout << endl;
    }
}