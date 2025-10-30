/*
RULES FOR SWITCH STATMENT :

1:  must be integer type 
            1: int
            2: char
            3: enum

        int x = 2;     ✅ Valid
        switch(x) { }

        float y = 3.5; 
       ❌ Invalid: cannot use float in switch

2:  Case constants must match data type

    char alpha ='A'

    switch (alpha) {
    
    case 'A' :
    case 'B' :
    case 'C' :

| Rule | Key Idea            | Example Output  |
| ---- | ----------------------- | --------------- |
| 1    | Only int/char allowed   | —               |
| 2    | Multiple cases allowed  | "Wednesday"     |
| 3    | Case type must match    | "Good"          |
| 4    | Executes until break    | "Two"           |
| 5    | Break stops switch      | "Case 1 Done"   |
| 6    | No break → fall-through | "One Two Three" |
| 7    | Default if no match     | "Unknown"       |

    
    }
*/


#include <iostream>
using namespace std ;

/*
int main()
{
    int x;
    cout <<"Enter your num: " ;

    cin >> x ;

    switch (x)
    {
        case 1:
            cout <<"You enter 1" ;
            break;
        
        case 2 :
            cout <<"You entered 2" ;
            break;
        case 3 :
            exit(0) ;
            // break ;
        default :
            cout <<"No exist" ;
    }

return 0 ;
}
*/

// Write a program to check whether it is even or not

/*
int main()

{
    int num ;

    cout <<"Enter your number: " ;
    cin >> num ;

    switch (num % 2) {

        case 0 :
            cout <<"Even number" ;
            break;
        default :
            cout <<"Odd number" ;
    }
return 0 ;
}

*/

int main()
{
    int num1;
    cout <<"Enter your num 1: " ;
    cin >> num1 ;

    int num2 ;
    cout <<"Enter your num 2: " ;
    cin >> num2 ;

    char choice ;

    cout <<"Enter your Operation (+ , - , / , *): " ;
    cin >> choice ;

    switch (choice) {

        case '+' :
        cout <<"Sum is: " << num1 + num2 ;
        break;
        case '-' :
        cout <<"Sum is: " << num1 - num2 ;
        break;
        case '*' :
        cout <<"Sum is: " << num1 * num2 ;
        break;
        case '/' :
        cout <<"Sum is: " << num1 / num2 ;
        break;
    }

    return 0 ;
}