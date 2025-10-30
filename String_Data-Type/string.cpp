#include <iostream>
#include <string>
using namespace std ;

/*
int main()
{
    string name = "Zafran Khan" ;
    cout << name ;

return 0 ;
}
*/

// TAKING INPUT FROM USER

int main()
{
    string name;

    cout <<"Enter your name: " ;

    getline(cin , name) ;

    cout <<"My name is " << name ;

return 0 ;
}