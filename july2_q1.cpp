#include<iostream>
using namespace std;
int main(){
    int a,b;
    for(a=1;a<=4;a++){
        for(b=1;b<=a;b++)
        if((a+b) % 2==0)
        cout<<1;
        else
        cout<<0;
        cout<<endl;

    }
}

 

