// BINARY SEARCH
/*
Series must be sorted if not then first make it sorted either in ascending order or descending order
How it work
let we have series 
11 12 13 15 16
let we have to target 15
and we know 0 index = 11 and 4 = 16
how it will search

low = 0
high = 
mid = low + hight / 2

11 | 12 | 13 | 15 | 16
0     1    2    3    4

first the whole will divide

mid = 0 + 4 / 2 = 2

our target is greator than so moves ahead

low = 13 (and index = 2)
hisght will remain same index = 4

mid = 2+4 / 2 
3

again our target is greater

so moves further like previos step

Note:
----------> mid + 1
<---------- mid - 1
*/



#include <iostream>
using namespace std;

int main()
{
    int array[] = {0,1,2,3,4,5,6,7,8};
    int target;
    cout << "Enter your Target: ";
    cin >> target;

    int start = 0;
    int end = (sizeof(array) / sizeof(array[0])) - 1;
    int index = -1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (array[mid] == target)
        {
            index = mid;
            break;
        }
        else if (array[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if (index != -1)
        cout << "Target found at index " << index << endl;
    else
        cout << "Target not found in the array." << endl;

    return 0;
}
