#include <iostream>
#include <string>
using namespace std;

struct mySelf
{
    string myName;
    string myFatherName;
    int age;
    string Education;
    int sibling;
};

int main()
{
    mySelf myIntro;

    cout << "Enter your Name: ";
    getline(cin, myIntro.myName);  

    cout << "Enter your Father Name: ";
    getline(cin, myIntro.myFatherName); 

    cout << "What's your Age: ";
    cin >> myIntro.age;
    cin.ignore(); 

    cout << "What is your Education: ";
    getline(cin, myIntro.Education); 

    cout << "How many siblings do you have: ";
    cin >> myIntro.sibling;

    cout << "\n--- My Introduction ---\n";
    cout << "My name is " << myIntro.myName << "\n";
    cout << "My Father name is " << myIntro.myFatherName << "\n";
    cout << "My age is " << myIntro.age << "\n";
    cout << "My Education is " << myIntro.Education << "\n";
    cout << "I have " << myIntro.sibling << " siblings" ;

    return 0;
}
