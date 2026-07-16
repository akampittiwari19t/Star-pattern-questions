#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    for(a=4;a>=1;a--){
        for(c=a;c<=4;c++)
        cout<<"";
        for(b=1;b<=a;b++)
        cout<<"*";
        cout<<endl;
    }
}