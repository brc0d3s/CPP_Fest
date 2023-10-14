#include<iostream>
using namespace std;

// Variable declaration
extern int a,b;
extern int c;
extern float f;


int main(){

    //variable definition
    int a,b;
    int c;
    float f;

    // variable intialization

    a= 10;
    b=20;
    c=a+b;

    cout<<c<<endl;

    f=70.5/2.3;

    cout<<f<<endl;


    return 0;
}