#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    char ch = 'E';
    for(a = 1; a <= 5; a++) {
        for(c = a; c <= 4; c++)
            cout << " ";
        for(b = 1; b <= a * 2 - 1; b++) {
            if(b == 1 || b == a * 2 - 1)
                cout << ch;
            else
                cout << " ";
        }
        ch--;
        cout << endl;
    }

}