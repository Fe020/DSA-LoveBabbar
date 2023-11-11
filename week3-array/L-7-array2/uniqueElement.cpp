// //my solution of finding unique ele,\emts

// #include<iostream>
// using namespace std;
// int count(int arr[],int size,int num)
// {
//     int totalCount=0;
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]==num)
//         totalCount++;
//     }
//     return totalCount;
// }
// int main()
// {
//     int a[10]={1,1,2,2,3,0,3,4,4,4};
//     for(int i=0;i<10;i++)
//     {
//         if(count(a,10,a[i])==1)
//         cout<<"unique element is: "<<a[i];
//         else
//         continue;
//     }
// }



// using XOR

#include<iostream>
using namespace std;
void uniqueSol(int arr[],int size)
{
    int solution=0;
    for(int i=0;i<size;i++)
    {
        solution=solution^arr[i];
    }
    cout<<"unique element of the array: "<<solution<<endl;
}

int main()
{
    int a[10]={1,1,2,2,3,3,4,4,0,9};
    uniqueSol(a,10);
}