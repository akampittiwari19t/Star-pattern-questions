#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    for(a=1;a<=4;a++){
        for(c=a;c<=4;c++)
        cout<<" ";
        for(b=1;b<=a*2-1;b++)
        cout<<"*";
        cout<<endl;
        
    }
}
