//basics


#include<iostream>
using namespace std;
int main()
{
    //array initialization
    int a[5];
    cout<<"array created successfully"<<endl;
    cout<<endl;



    //address of array
    //address f is denoted by: &
    int b=5;
    bool c[6];
    cout<<"address of array a: "<<&a<<endl;
    cout<<"address of int b: "<<&b<<endl;
    cout<<"address of bool c: "<<&c<<endl;
    cout<<endl;



    //size of a datatype
    cout<<"size of integer array a[10]: "<<sizeof(a)<<" bytes"<<endl;
    cout<<"size of int b: "<<sizeof(b)<<" bytes"<<endl;
    cout<<"size of bool array c[6]: "<<sizeof(c)<<" bytes"<<endl;
    cout<<endl;



    //int a[200]={2,4} here next 198 values will be 0.
    //index of an array always starts from 0
    int d[5]={3,5,2};
    // cout<<"1st/starting element of the array"<<c[0]<<endl;
    // cout<<"2nd element of the array: "<<d[1]<<endl;
    // cout<<"3rd element of the array: "<<d[2]<<endl;
    // cout<<"4th element of the array: "<<d[3]<<endl;
    // cout<<"5th element of the array: "<<d[4]<<endl;
    
    //or
    //printing array
    cout<<"element of array: "<<endl;
    for(int i=0;i<sizeof(d)/sizeof(d[0]);i++)
    {
        cout<<d[i]<<" ";
    }
    cout<<endl;



    //remember int a[5]; let's take input for that
    cout<<"enter elements of the array d: "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    //print array a
    cout<<"elements of the array d are: "<<endl;
    for(int i=0;i<sizeof(a)/sizeof(a[1]);i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


