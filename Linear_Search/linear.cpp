#include <iostream>
using namespace std;


int main()
{
    int array[] = {0,1,2,3,4,5,6,7,8} ;
    
    int target ;
    cout <<"Enter your Target: ";
    cin >> target ;

    int index = -1;

    for (int i=0; i<sizeof(array)/sizeof(array[0]); i++)
    {
        if (array[i] == target)
        {
            index = i ;
        cout <<"Target found at index " << index << endl ;
        }
    }
    if (index == -1) {
        cout <<"Target not found" ;
    }

return 0 ;
}