/*
    The public data members of objects of a class can be accessed using the direct member
    access operator (.). Let us try the following example to make the things clear −
*/

#include <iostream>
using namespace std;

class Box{
    public:
        double length;
        double breadth;
        double height;       
};

int main(){

    Box Box1;        // Declare Box1 of type Box
    Box Box2;        // Declare Box2 of type Box
    double volume = 0.0;     // Store the volume of a box here
 
    //Box1 specification
    Box1.length=10.6;
    Box1.breadth=34.6;
    Box1.height=97.8;

    //Box2 specification
    Box2.length=45.7;
    Box2.breadth=65.1;
    Box2.height=10.8;

    //Volume of box1
    volume=Box1.length*Box1.breadth*Box1.height;
    cout<<"Volume of Box1 : \t"<<volume<<endl;

    //volume of box2
    volume=Box2.length*Box2.breadth*Box2.height;
    cout<<"Volume of Box2 : \t"<<volume<<endl;

    return 0;

}
