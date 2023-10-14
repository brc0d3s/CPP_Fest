/*

Sr.No	Header File                   Function and Description
1	    <iostream>         This file defines the cin, cout, cerr and clog objects,
                            which correspond to the standard input stream, the standard output stream,
                            the un-buffered standard error stream and the buffered standard error stream,
                            respectively.

2	    <iomanip>          This file declares services useful for performing formatted I/O with 
                            so-called parameterized stream manipulators, such as setw and setprecision.

3	    <fstream>           This file declares services for user-controlled file processing. 
                             We will discuss about it in detail in File and Stream related chapter.


*/

#include <iostream>
 
using namespace std;
 
int main() {
   char name[50];
   char str[] = "Unable to read....";
 
   cout << "Please enter your name: ";
   cin >> name;
   cout << "Your name is: " << name << endl;


   cerr << "Error message : " << str << endl;

   clog << "Error message : " << str << endl;
 
}