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