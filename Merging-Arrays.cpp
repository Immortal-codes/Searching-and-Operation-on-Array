#include <iostream>

    using namespace std;

 

    int main()
    {
        char arr1[] = {'I', 'J', 'K', 'L', 'M'};

        char arr2[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

        char arr3[13];

        for (int i=0; i< 5; i++) {
            arr3[i] = arr1[i];
        }

        for (int i=5; i< 13; i++) {
            arr3[i] = arr2[i-5];
        }

        for (int i=0; i< 13; i++) {
cout<< arr3[i] << ' ';
        }
cout<<endl;

        return 0;
    }