#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    int num=1;
    for(a=1;a<=9;a++){
        for(c=a;c<=5;c++)
        cout<<" ";
        for(b=1;b<=a*2-1;b++)
        cout<<num;
        num++;
        cout<<endl;

}
    
}