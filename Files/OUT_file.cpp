#include "iostream"
#include "fstream"
#include "string"
using namespace std ;

int main()
{

    string name = "ZAFRAN KHAN\nHOW ARE YOU\nARE YOU OKAY BUDDYYYYYYYYY" ;

    ofstream str("open.txt") ;

    str << name ;


return 0 ;
}