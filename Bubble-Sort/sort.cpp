#include <iostream>
#include "string" 
using namespace std;

/*
int main() {
    int array[7] = {1, 4, 3, 2, 5, 9, 8};

    for (int i = 0; i <6; i++) {
        for (int j = 0; j < 7 - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array is: ";
    for (int i = 0; i < 7; i++) {
        cout << array[i] << " ";
    }

    return 0;
}
*/

int main() {
    string array[7] = {"Zafran" , "Kamran" , "Irfan" , "Sohail" , "Zulfi" , "Naseem" ,"Ibraheem"};

    for (int i = 0; i <6; i++) {
        for (int j = 0; j < 7 - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                string temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    cout << "[ ";
    for (int i = 0; i < 7; i++) {
        cout << array[i] << " , ";
    
    }
    cout <<"]" <<endl;

    return 0;
}