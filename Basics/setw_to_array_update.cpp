#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

int main(){

    int LA[10];
    int i,j;

    //print the original values
    for(i=0;i<10;i++){
        cout<<setw(13)<<"Index: "<<i<<setw(13)<<"Value: "<<LA[i]<<endl;

        //update
        LA[i]=i+100;
    }

    
    cout<<setw(20)<<"\n After update : \n";
    cout<<setw(13)<<"Index :"<<setw(13)<<"Values :"<<endl;
    for (j = 0; j<10; j++){
        cout<<setw(10)<<j<<setw(10)<<LA[j]<<endl;
    }
    


}