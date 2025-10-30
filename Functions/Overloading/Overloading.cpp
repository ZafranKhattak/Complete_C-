#include <iostream>
using namespace std;


int test(int a)
{
    cout << "a: " << a << endl ;
}

int test(int a , int b)
{
    cout << "a: " << a << b << endl ;
} 

int test(int a , double b)
{
    cout << "a: " << a << b << endl ;
}

int test(int a , int c)
{
    cout << "a: " << a << c << endl ;
}

int main()
{
    test(19);
    test(19 , 20);
    test(19 , 21.10);
    test(19 , 22);

    return 0 ;
}