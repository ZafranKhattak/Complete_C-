#include <iostream>
#include <string>
using namespace std ;


// ASK USER IF MALE THEN PRINT MR.  IF FEMALE THEN PRINT MRS.
int main()
{

    string name ;
    cout <<"\nEnter your name: " ;
    getline(cin , name) ;

    string gender ;

    cout <<"Enter your gender (male / female / none): " ;
    cin >> gender ;

    if (gender == "male") {

        cout <<"The husband of Safia Bibi is MR. " << name << endl;
    }
    else if (gender == "female") {
        cout <<"The wife of Hello Khan is Mrs. " << name << endl;
    }
    else {
        cout <<"You are transgender" << endl;
        
    }

return 0 ;
}