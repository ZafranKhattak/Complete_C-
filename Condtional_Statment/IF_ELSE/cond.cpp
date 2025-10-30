/*

Conditional Statements
A conditional control structure is a fundamental concept in computer programming
that allows you to control the flow of a program based on specified conditions or
criteria. It enables you to make decisions in your code, executing different sets of
instructions depending on whether a condition or set of conditions is met.

*/

#include <iostream>
#include <string>
using namespace std ;


int main()
{
    string name ;
    double marks ;

    cout <<"Enter your Name: " ;
    getline(cin , name) ;

    cout << name << endl;

    cout <<"Enter your marks: " ;
    cin >> marks;

    if (marks >90) {
        cout <<"Your marks is: " << marks << "\n and grade is: " << 'A' ;
    }
    

    else if (marks > 80) {
        cout <<"Your marks is: " << marks << "\n and grade is: " << 'B' ;
            
        }

    else if (marks > 70) {
        cout <<"Your marks is: " << marks << "\n and grade is: " << 'C' ;

        }

    else if (marks > 60) {
        cout <<"Your marks is: " << marks << "\n and grade is: " << 'D' ;
        }
    else
    {
        cout <<"Your marks is: " << marks << "\n and grade is: " << 'F' ;

    }
return 0 ;    
}