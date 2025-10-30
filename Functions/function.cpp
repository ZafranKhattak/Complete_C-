#include <iostream>
using namespace std ;


/*
void greet()
{
    cout << "Hello welcome Back \n" ;
}

int main()
{
    cout <<"This is print first \n" ;

    greet() ;

    cout <<"This will print after" ;

    return 0 ;
}

*/

///////////////////////////////////////////////////////////


// Function Parameters:


/*

int add(int a , int b )
{
    return a + b ;
}

int main (){

    cout << add(3, 5);

    return 0 ;
}

*/
///////////////////////////////////////////////////////////


/*
#include <iostream>
using namespace std ;

int add(int a1 , int b1 )
{
    
    return a1 + b1 ;
}

int main (){

    int a = 6;
    int b = 7;
    
    cout << add(a , b) ;

    return 0 ;
}
*/


///////////////////////////////////////////////////////////


/*
#include <iostream>
using namespace std ;

int add(int a1 , int b1 )
{
    
    return a1 + b1 ;
}

int main (){

    int sum ;
    
    sum = add(23 , 34) ;
    
    cout << sum ;

    return 0 ;
}


*/

///////////////////////////////////////////////////////////

// Function Prototype

/*
int add(int  , int  ) ;

int main()
{
    int sum = add(5,6) ;
    cout << sum ;

return 0 ;
}

int add(int a , int b)
{
    return a + b ;

}

*/

///////////////////////////////////////////////////////////

// Library Functions

#include <cmath>

/*
int main ()
{
    double num ;
    float num1 ;
    num = 25.0 ;
    num1 = 2.0 ;

    cout << "The square root of two num is: " << sqrt(num) << endl ;
    cout << "The square of two num is: " << pow(num , num1) << endl ;
}

*/


// CALCULATOR : 

/*
void Calculator(double num1 , double num2)
{


    cout <<"The sum of two number is: " << num1 + num2 << endl;
    cout <<"The sub of two number is: " << num1 - num2 << endl;
    cout <<"The mult of two number is: " << num1 * num2 << endl;
    cout <<"The modolus of two number is: " << num1 + num2 << endl;
    cout <<"The division of two number is: " << num1 / num2 << endl;
    
}


int main ()
{
    
    double num1 ;
    
    cout <<"Enter your first number: " ;
    cin >> num1 ;

    double num2;
    cout <<"Enter your second number: " ;
    cin >> num2 ;

    Calculator(num1 , num2) ;

return 0 ;
}

*/


int add (int a , int b )
{
    return a + b ;
}

int main ()
{
    int num1 ; 
    cout <<"Enter first number: ";
    cin >> num1 ;

    int num2;

    cout <<"Enter second numbber: " ;
    cin >> num2 ;
    int final = add(num1 , num2) ;

    cout <<"The sum is: " << final ;

return 0;
}