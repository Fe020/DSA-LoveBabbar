#include<iostream>
using namespace std;

void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << ", ";
    }
    cout << endl;
}

void arrangeArray(int a[],int size)
{
    int j=0;
    
    //while loop
    int i=0;
    while(i<size)
    {
        if(a[i]<0)
        {
            // cout<<"i =" <<i<<" and a[i] = "<<a[i]<<endl;
            // cout<<"j =" <<j<<" and a[j] = "<<a[j]<<endl;
            swap(a[i],a[j]);
            j++;
        }
        i++;
    }

    //for loop
    // for(int i=0;i<size;i++)
    // {
    //     if(a[i]<0)
    //     {
    //         swap(a[i],a[j]);
    //         j++
    //     }
    // }
}

int main()
{
    int arr[8] = {2, 4, -4, -1, -7, 8, 1, -5};
    arrangeArray(arr, 8);
    printArray(arr, 8);

    return 0;
}
