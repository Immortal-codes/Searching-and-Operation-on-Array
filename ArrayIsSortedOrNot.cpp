#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int i;
    int j;
    int n = 10;
    int arr1[10];
    for (i = 0; i < 10; i++)
    {
        arr1[i] = arr[i];
        //cout << arr1[i] << endl;
    }

    sort(arr, arr + n);
    
    for (i = 0; i < 10; i++)
    {

        if (arr1[i] == arr[i])
        {
            cout << "sorted  ";
            break;
        }
        else
        {
            cout << "not sorted  ";
            break;
        }
    }
}