// 🧩 Task: “Mini Calculator with Functions”

#include <iostream>
#include <cmath>
using namespace std ;

int add(int a , int b)
{
    return a + b ;
}

int subtraction(int a , int b)
{
    return a - b ;
}
int multiy(int a , int b)
{
    return a * b ;
}
int division(int a , int b)
{
    return a / b ;
}
int power(int a , int b)
{
    return pow(a , b) ;
}

int main()
{
    int resultSum = add(5,7) ;
    cout <<"The sum is: " << resultSum << endl;

    int resultSub = subtraction(5,7) ;
    cout <<"The sub is: " << resultSub << endl;

    int resultmul = multiy(5,7) ;
    cout <<"The multy is: " << resultmul << endl;

    int resultdi = division(10,5) ;
    cout <<"The division is: " << resultdi << endl;

    int resultpow = power(2,3) ;
    cout <<"The power is: " << resultpow << endl; 
}