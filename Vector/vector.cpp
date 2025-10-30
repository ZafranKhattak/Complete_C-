/*
VECTOR:
    Dynamic in nature.Do not have fixed size.

SYNTAX:
    vector <dataType> variable_Name = {} ;
    vector <dataType> variable_Name(5 , 0)  // 5 = size and 0 = index

For Each:
    We use for each for this

    for(int value : variableName)
*/

#include <iostream>
#include <vector>
using namespace std ;

/*
int main()
{
    vector <int> vec =  {1,2,3,4,5,6} ;

    for (int val : vec) {
        cout <<val << endl ;
    }

    for (int i = 0; i < 6; i++) {
        cout <<i << " " ;
    }
return 0 ;
} 
*/  

/*
VECTOR FUNCTION:
    size  // size of vector
    push_back  // add element at last
    pop_back   // remove element from last
    front    // first value
    back    // last value
    at      // accessing the element
*/

// int main()
// {
//     vector <int> vec =  {1,2,3,4,5,6} ;

//     cout <<"Size = " << vec.size() << endl;

//     vector <int> ent ;

//     ent.push_back(10) ;
//     ent.push_back(11) ;
//     ent.push_back(12) ;
//     ent.push_back(13) ;

//     cout <<"Size after adding= " <<ent.size() << endl;

//     ent.pop_back() ;
//     cout <<"Now size = " << ent.size() << endl;

//    cout << ent.front() << endl ;

//     cout << "Position= " <<ent.at(1) ;

// return 0 ;
// } 


// QUESTION

int main()
{
    vector <int> unique = {1,2,2,3,3,4,4} ;

    int ans = 0 ;

    for (int val : unique) {

        ans = ans ^ val ;


    }
        cout << "Unique value is: " << ans ;

}