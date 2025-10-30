/*
SENTINEL CONTROLLED LOOP :

    A sentinel-controlled loop is also called an indefinite repetition loop because the
number of iterations is not known before the loop starts executing.

    Two common sentinel-controlled loops in C++ are:
• while loop
• do-while loop

SYNTAX :

    while (condition){
        body
        update expression
    }

*/


#include <iostream>
using namespace std ;

/*
int main()

{
    int i = 1;

    while (i <=5) {

        cout << i << endl; 
        i++ ;
    }

return 0 ;
}
*/

/*
int main()

{

    int num ;


    while (num != 0) {

        cout <<"Enter any value: " ;
        cin >> num ;

        cout << "You have entered " << num << endl;
    }

    cout << "Loop ended" ;
return 0 ;
}
*/

// SUM OF POSTIVE INTGER. IF USER ENTER NEGATIVE NUMBER LOOP ENDED 

int main() 
{
    int num ;
    int sum = 0 ;

    while (num >=0)
    {
        cout <<"Enter Positive num: " ;
        cin >> num ;
        if (num <0) {
            break;
        }
        sum += num ;
    }

    cout <<"The sum of positive integer is: " << sum ;
    

return 0 ;
}