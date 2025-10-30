#include <iostream>
using namespace std ;

/*
int main()
{
    int marks[5] = {90 ,67,45,34,56} ;
    int size = 5 ;
    for(int i=0 ; i<size; i++) {
        cout << marks [i] << endl ;
    }
}
    */


// For Loop

/*
int main()
{
    int size = 5 ;

    int marks[size] ;

    for (int i=0; i< size; i ++) {
        cin >> marks[i] ;
    }

    for (int k=0 ; k< size; k++) {
        cout <<marks[k] << endl ;
    }

    return 0 ;
}
*/

/*
// Check smallest and largest value in Array;

int main()

{
    int smallest = 0 ;
    int largest = 0 ;
    int size = 6 ;
    int array_Number[] = {12 , -8 , -9 , 45 , 67 ,89} ;

    for (int i=0; i<size; i++) {

        if (smallest > array_Number[i]) {

            smallest = array_Number[i] ;
        }

        else {

            largest = array_Number[i] ;

        }
    }

    cout << "Smallest value is: " << smallest << endl ;
    cout << "Largest value is: " << largest << endl ;

    return 0 ;
}

*/

/*
// Linear Search

int  linearSearch(int arr[] , int sz, int targest)
{
    for (int i=0 ; i<sz ; i++) {
        if (arr[i] == targest) {
            return i ;
        }

        
            
    }
    return -1 ;
}

int main()
{
    int arr[] = {1,2,3,4,5,6} ;

    int sz = 6 ;

    int targest = 3 ;

    cout <<linearSearch(arr , sz , targest) ;

    return 0 ;
}

*/

/*
Revers Array

int main()
{
    int rever[] = {1,2,3,4,5,6} ;

    for (int i=5 ; i>=0; i--) {
        cout <<rever[i] <<" " ;
    }

    return 0 ;
}

*/


/*
// Sum of Integer in Array;

int main()
{
    int sumArray[] = {1,2,3,4,5} ;
    int sz = 5 ;
    int sum = 0 ;

    for (int i=0 ; i<sz; i++) {

        sum += sumArray[i] ;
    }

    cout <<"The sum of array is: " << sum ;

    return 0 ;
}

*/
/*

int main()
{
    int sumArray[] = {1,2,3,4,5} ;
    int sz = 5 ;

    for (int i=0 ; i<sz; i++) {

        if (sumArray[i] % 2 == 0) 

            cout << sumArray[i] << " ";


    }


    return 0 ;
}
*/


// UPDATION OF ARRAY

/*
int main()
{
    int array[] = {1 ,2 ,3, 4, 5 ,7, 8, 9} ;
cout <<"Before updation: " << endl;

 for(int i=0; i<sizeof(array)/sizeof(array[0]); i++)
 cout <<array[i] <<" " ;
    array[5] = 6;
cout<<"\n" ;
    cout <<"After updation: " << endl;

     for(int i=0; i<sizeof(array)/sizeof(array[0]); i++)
 cout <<array[i] <<" " ;
return 0 ;
}
*/

// ADD TWO ARRAY

/*
int main()
{
    int array_1[] = {1,2,3,4} ;
    int sum_1 = 0 ;
    int sum_2 = 0 ;

    int final_sum = 0 ;
    for (int i=0; i<sizeof(array_1)/sizeof(array_1[0]); i++) {

        sum_1 += array_1[i] ;
    }

    cout <<"\n" << sum_1 << endl;

    int array_2[] = {5,2,3,4} ;

        for (int i=0; i<sizeof(array_2)/sizeof(array_2[0]); i++) {

        sum_2 += array_2[i] ;
    }

    cout<<"\n" << sum_2 << endl;


    final_sum = sum_1  + sum_2 ;

    cout <<"The final sum is: " << final_sum;
return 0 ;
}
*/


