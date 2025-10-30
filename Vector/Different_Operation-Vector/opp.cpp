#include <iostream>
#include <vector>
using namespace std ;


int main()
{
    vector <int> v = {1,2,3,5} ;

    //Insert

    v.insert(v.begin() + 3 , 4) ;
    
    for (int x : v) {
        cout << x << " " << "\n";
    }

    // ERASE // specific element can be erase

    v.erase(v.begin() + 0) ;

        for (int x : v) {
        cout << x << " "  ;
    }

}