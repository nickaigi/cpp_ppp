#include<iostream>
using namespace std;


int main(){
    // implicit conversion from 'double' to 'int' changes value from 2.9 to 2
    int x = 2.9;
    // implicit conversion from 'int' to 'char' changes value from 1066 to 42
    // in ASCII 42 represents an asterix
    char c = 1066;
    cout<<"expected x as 2.9, we have x="<<x<<"\n";
    cout<<"expected c as 1066, we have c="<<c<<"\n";
}
