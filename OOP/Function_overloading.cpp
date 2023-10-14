#include <iostream>
using namespace std;

class PrintData{
        public:
            void print(int i){
                cout<<"Printing Integer"<<endl;
            }

            void print(float f){
                cout<<"Printing a float"<<endl;
            }

            void print(char c){
                cout<<"Printing character"<<endl;
            }

            void print(const char* str) {
                cout << "Printing string: " << str<<endl;
            }
};


int main(void){
    PrintData pd;

    // Call print to print integer
    pd.print(67);

    // Call print to print float
    pd.print(5676.98f);

    // Call print to print character
    pd.print('A');


    // Call print to print character
    pd.print("Function Overloading in cpp");


    return 0;
}