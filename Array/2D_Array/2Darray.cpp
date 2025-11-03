#include <iostream>
using namespace std ;

/*

int main()
{
    int matrix [4][3] = {
                         {1,2,3},
                         {4,5,6},
                         {7,8,9}, 
                         {10,11,12}
                                    } ;

    int row = 4 ;
    int col = 3 ;

    cout <<matrix[0][2] << endl;

return 0 ;
}

*/

// UPDATE ARRAY 

/*
int main()
{
    int matrix [4][3] = {
                         {1,2,3},
                         {4,5,12},
                         {7,8,9}, 
                         {10,11,12}
                                    } ;

    int row = 4 ;
    int col = 3 ;

    matrix [1][2] = 6 ; 
    cout <<matrix[1][2] << endl;

return 0 ;
}

*/

// LOOP ON ARRAY

/*

int main()
{
    int matrix [4][3] = {
                         {1,2,3},
                         {4,5,6},
                         {7,8,9}, 
                         {10,11,12}
                                    } ;

    int row = 4 ;
    int col = 3 ;

    for (int i=0; i<row; i++) {

        for (int j=0; j<col; j++) {

            cout << matrix[i][j] <<" " ;
        }

        cout << endl;
    }

return 0 ;
}

*/


// HOW STORE IN MEMORY
/*
    Store linearily like 
                       {
                         {1,2,3},
                         {4,5,6},
                         {7,8,9}, 
                         {10,11,12}
                                    } ;

ROW MAJOR

[ 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 ]

COLUMS MAJOR

|1 | 4 | 7 | 10 | 2 | 5 | 8 | 11 | 3 | 6 | 9 | 12 |

depend krta hia jis mein store hona hai 
*/

// LINEAR SEARCH

/*
int main()
{
    int matrix [4][3] = {
                         {1,2,3},
                         {4,5,6},
                         {7,8,9}, 
                         {10,11,12}
                                    } ;

    int row = 4 ;
    int col = 3 ;
    int indexrow = -1 ;
    int indexcol = -1 ;
    int target ;

    cout <<"Enter your target: " ;
    cin >> target ;

    for (int i=0; i<row; i++) {

        for (int j=0; j<col; j++) {

            if (matrix[i][j] == target) {

                indexrow = i;
                indexcol = j ;

                cout <<"Target found at row " << indexrow <<" and at coloms " << indexcol;
                break;
            }
        }
    }

    if (indexrow == -1 && indexcol == -1) {
        cout <<"Target not found" ;
    }

return 0 ;
}

*/

// SUM OF ARRAY

/*
int main()
{
    int matrix [3][3] = {
                         {1,2,3},
                         {4,5,6},
                         {7,8,9}, 
                                    } ;

    int row = 3;
    int col = 3 ;
    int maxRow = 0 ; 
    for (int i=0; i<row; i++) {
           int sumrow1 = 0 ;
        
        for (int j=0 ; j<col; j++) {

            sumrow1 += matrix[i][j];

        }
    cout <<"The sum of row " << i<< " is:" << sumrow1 << endl;
    
    
    if (sumrow1 >maxRow ) {

        maxRow = sumrow1 ;
    }
}
    cout <<"The maximum sum is: " << maxRow << endl ;
return 0 ;
}

*/

// SUM OF TWO ARRAYS

int main()
{
    int array1[2][2] = {{1,2},{3,4}} ;
    int array2[2][2] = {{5,6},{7,8}} ;

    int sumOfArray =0 ;

    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {

            cout << array1[i][j] <<" " ;

        }

        for (int i=0; i<2; i++) {
            for (int j=0; j<2; j++) {
                cout <<array2[i][j] << " " ;
            }

            cout <<endl;
        }

        cout <<endl;
    }

return 0 ;
}