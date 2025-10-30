#include <iostream>
#include "string"
using namespace std ;


// Let we have one number repeat n times now check how many times it repeat

/*
int main()
{
    int array [] = {1,2,3,4,2,2,2,2,3,3,3,4,4,4,4,2,2,2,2,3,3,3,3,3,3,5,5,5,5,6,6,6,6} ;
    int size = sizeof(array)/sizeof(array[0]);

    int target ;  
    cout <<"Enter your target: " ;
    cin >> target ;

    int count = 0 ;

    for (int i=0; i<size; i++) {
        
        if (array[i] == target) {

            count ++ ;
        }
    }

    cout <<"The number is repeat "<<count <<" times";

return 0 ;
}

*/


// Adding Two or more arrays

/*
int main()
{
    int a[] = {1,2,3,4,5} ;
    int b[] = {6,7,8,9,10} ;
    int d[5] ;
    for (int i=0; i<5; i++) {

        d[i] = a[i] + b[i] ;

        cout << d[i] <<" " ;

    }
return 0 ;
}

*/

/*
SUM OF ARRAY
AVERAGE OF ARRAY
LARGEST AND SMALLEST VALUE OF ARRAY
SEARCH A SPECIFIC ELEMENT
*/

#include <iostream>
using namespace std;

int main()
{
    int a[] = {1,2, 3, 4, 5,1};
    int sum = 0;
    int smallest = a[0]; 
    int largest = a[0];
    int target ;
    cout <<"Enter your target: " ;
    cin >> target;
    int index = -1;

    int n = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < n; i++) {
        sum += a[i];

        if (a[i] < smallest){
            smallest = a[i];
        }
        if (a[i] > largest){
            largest = a[i];
        }
        if (a[i] == target){
            index = i;
        cout <<"Index is : " << index << "\n";

        }   
    }

    cout << "The sum of array is: " << sum << endl;
    cout << "The average of array is: " <<(float)sum / n << endl;
    cout << "The smallest element is: " << smallest << endl;
    cout << "The largest element is: " << largest << endl;
    cout <<"Index is : " << index;

    return 0;
}
