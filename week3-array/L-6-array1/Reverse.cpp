#include<iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    for(int i = 0; i < size / 2; i++)
    {
        swap(arr[i],arr[size - 1 - i]);
    }
    
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int a[5] = {1, 2, 5, 4, 0};
    cout << "Reversed array: ";
    reverseArray(a, 5);
    
    return 0;
}
