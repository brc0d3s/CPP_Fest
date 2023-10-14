/*

Consider a base class Shape and its derived class Rectangle as follows −

*/

#include <iostream>
using namespace std;

//Base class
class Shape{
    public:
        void setWidth(int w){
            width=w;
        }
        void setHeight(int h){
            height=h;
        }

    protected:
        int width;
        int height;
};

//Derived Class
class Rectangle: public Shape{
    public:
        int getArea(){
            return width*height;
        }
};

int main(void){

    Rectangle rect;

    rect.setWidth(6);
    rect.setHeight(5);

    //Print the area of the object
    cout<<"Total area : "<<rect.getArea()<<endl;

    return 0;
}