#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14

int main(){

    float area;
    float radius;
    
    cout<<"Enter the radius of the circle : \n";
    cin>> radius;

    area=PI * pow(radius,2);
    printf("\n The area is:  %f \n",area);

    return 0;
}