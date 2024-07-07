//int - integer - 4byte
//char - character - '' - 1byte
//bool - True/False - 1bit
//float - sraction number - 8byte
//double - 8 byte

#include<iostream>
using namespace std;
int main(){
    int a=123;
    cout<< a << endl;
    
    char b='v';
    char c='ab';
    bool b1=true;
    cout<<b1 << endl;
    
    float f=1.2;
    cout<<f << endl;
    double d=1.23;
    cout<<d << endl;
    
    int size=sizeof(a);
    cout<< "size of a is : " << size <<endl;
}
