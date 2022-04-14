#include <iostream>
using namespace std;

int main()
{
    int i, j;  //SORTING THE ARRAY

    int temp, x;
    cout<<"Sorted Array:"<<endl;
    int a[] = {2, 5, 34, 3, 11, 8, 6, 77, 4};
    int n = sizeof(a) / sizeof(a[0]);
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; ++j)
        {
            if (a[i] > a[j ])
            {
                
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " "<<endl;
    }
   
   
   cout<<"Input Element:";   
    cin >> x;
    a[n] = x;                         //ADDING NEW ELEMENT IN ARRAY



    for (i = 0; i <= n; i++)                    // SORTING NEW ARRAY
    {
        for (j = i+1; j <= n; ++j)
        {
            if (a[i] > a[j ])
            {
                
                temp=a[i];
                a[i]=a[j];
                
                a[j]=temp;
            }
        }
    }
    cout<<"New Sort Array:"<<endl;
    for (int i = 0; i < n+1; i++)
    {
        cout << a[i] << " "<<endl;
    }
    return 0;
}
