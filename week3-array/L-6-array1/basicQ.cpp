
#include<iostream>
using namespace std;
int main()
{
    int arr1[10];
    cout<<"enter the elements of array: "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr1[i];
    }



    //sum of the array
    int sum=0;
    cout<<"sum of elements of the array: ";
    for(int i=0;i<5;i++)
    {
        sum=sum+arr1[i];
    }
    cout<<sum<<endl;




    //double an array elements
    cout<<"Down here elements of array got multiplied by 2"<<endl;
    for(int i=0;i<5;i++)
    {
        arr1[i] =arr1[i]*2;
    }
    //new array
    for(int i=0;i<5;i++)
    {
        cout<<"arr1[i] ="<<arr1[i]<<endl;
    }
    // cout<<"new array (elements of array multiplied by 2): "<<arr1[5]<<endl;

}