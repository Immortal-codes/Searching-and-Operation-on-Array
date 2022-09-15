#include<iostream>

using namespace std;

int main()
{

    int arr[] = {2, 4, 0, 1, 9, 5};
    int key = 9;
    int i;
    int len = 6;
    int s = 0;
    int mid;
    int result;
    mid = (len + s) / 2;

    if (key == arr[mid])
    {
        cout << arr[mid];
    }


    else if (key > mid)
    {
        for (i = mid+1; i < len-1; i++)
        {
            if (key == arr[i])
            {
                return -1;
                break;
            }
        }
    }
    else
    {
        for (i = s; i < mid-1; i++)
        {
            if (key == arr[i])
            {
                cout << arr[mid]<<endl;
                break;
            }
        }
    }

    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
}