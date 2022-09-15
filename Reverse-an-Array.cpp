#include<iostream>

using namespace std;

int main()
{
    int arr[]={ 1, 3, 4, 5, 6 };
    int i;
    int count =5;
    int arr1[5]={};
    int j;
    for ( i = 0; i < count; i++)
    {
        arr1[i]=arr[i];
       
    }
    for ( j = count-1; j >=0; j--)
    {
        cout<<arr1[j];
    }


    
    
}