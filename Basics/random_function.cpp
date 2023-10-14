#include <iostream>
#include <cstdlib>
using namespace std;
int main(){

    int i,j;

    for (i=0;i<11;i++){
        srand(i);  // Seed the random number generator with i (not recommended, see explanation below)
        j = rand();
        cout << j << endl;
    }
    

    return 0;
}