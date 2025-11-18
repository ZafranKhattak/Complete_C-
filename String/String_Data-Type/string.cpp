/*
String data type :
    There are two types of strings commonly used in C++:
1. C-strings (C-style Strings)
2. Strings that are objects of string class (The Standard C++ Library string class)

1. C-strings (C-style Strings)
        In C programming, the collection of characters is stored in the form of arrays. This is
also supported in C++ programming. Hence it's called C-strings.
C-strings are arrays of type char terminated with null character, that is, \0 (ASCII value
of null
EXAMPLES
char s[] = {'C', '+', '+', '\0'};
char s[4] = {'C', '+', '+', '\0'};
char s[4] = "C++";
 char s[] = "C++"


C++ string
Most of the time we will be using C++ string class (provided by the C++ library) because
it is easier to use than C-strings.

EXAMPLES

string variable_name ;

*/
#include <iostream>
#include <string>
using namespace std;

/*

int main()
{
    char str[] = "c++" ;
    for (int i=0; str[i] !='\0'; i++) {

    cout << str[i] ;

    }
    string name ;
    cout <<"\nEnter your name: " ;
    getline(cin , name) ;

    string father ;
    cout <<"Enter your father name: " ;
    getline(cin , father) ;

    cout <<"My name is " << name <<"\n" ;
    cout <<"My father name is " << father <<"\n" ;

return 0 ;
}

*/

/*
Strings – Basic operations (built-in functions of string class)
Counting the number of characters in a string:

*/

/*
        Commonly Used string Functions Summary

        | Function |             | Description |               | Example |
| ------------------------ | ---------------------------- | --------------------- |
| `length()` / `size()`    | Returns number of characters | `str.length()`        |
  ---------------------------------------------------------------------------------
| `append(str)`            | Adds string at end           | `s1.append(s2)`       |
  ---------------------------------------------------------------------------------
| `insert(pos, str)`       | Inserts at position          | `s.insert(2, "abc")`  |
  ---------------------------------------------------------------------------------
| `erase(pos, len)`        | Removes part of string       | `s.erase(3, 2)`       |
  ---------------------------------------------------------------------------------
| `replace(pos, len, str)` | Replaces portion             | `s.replace(0,3,"Hi")` |
  ---------------------------------------------------------------------------------
| `substr(pos, len)`       | Returns substring            | `s.substr(2,4)`       |
  ---------------------------------------------------------------------------------
| `find(str)`              | Finds substring position     | `s.find("abc")`       |
  ---------------------------------------------------------------------------------
| `clear()`                | Empties the string           | `s.clear()`           |
  ---------------------------------------------------------------------------------
| `compare(str)`           | Compares strings             | `s1.compare(s2)`      |
  ---------------------------------------------------------------------------------
| `swap(str)`              | Swaps two strings            | `s1.swap(s2)`         |
  ---------------------------------------------------------------------------------

*/

int main()
{

    // LENGTH

    string str;
    cout << "Enter your name: ";
    getline(cin, str);

    cout << str.length() << "\n";

    // Access Characters

    cout << str[3] << "\n";

    // ---> Substrings --> this take (start , end)

    cout << str.substr(0, 6) << "\n";
    //   --->  if not given ending then it will print till end like below
    cout << str.substr(0) << "\n";

    // ----> Find / Search ---> this find the string or character in string and it return index value

    string str1 = "I love C++ programming";

    int pos = str1.find("love");

    if (pos != string::npos)
    {

        cout << "Found position at: " << pos << "\n";
    }

    // --> REPLACE -- > (start, length, new_text)

    string str3;
    cout << "Enter your sentence: ";
    getline(cin, str3);

    cout << str3 << "\n";

    cout << str3.find("profession") << "\n";

    cout << str3.replace(13, 22, "Love") << "\n";

    // --> Insert

    cout << str3.insert(0, "Hello Jani ") << "\n";

    // . Erase --> (start , end)  --> end = end -1 hota hai

    cout << str3.erase(0, 2) << "\n";

    // Clear --> this empty the whole string;

    str3.clear();

    // ----->  Compare

    string a = "apple";
    string b = "Banana";

    if (a == b)
        cout << "Equal";
    else if (a < b)
        cout << "a comes first"; // lexicographical comparison

    else
    {
        cout << "B comes first" << endl ;
    }

    // ----> Swap

    string c = "First", d = "Second";
    c.swap(d);
    cout << c << " " << d << endl; 
    

    return 0;
}