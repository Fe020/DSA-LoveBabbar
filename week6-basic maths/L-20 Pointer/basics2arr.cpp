#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,30,40,50};
    int* p=arr;     //points mem address of 1st pointer
    int* q=&arr[0];    //normal way of representation
    int* r=arr+0;    //arr(1st address)+(0*4)bytes
    int (*s)[5]=&arr;    //pointer of array
    //arr of pointers are like- int* arrOfP[5];
    //actually all three are same
    
    cout<<"location of 0th index of the arr: "<<p<<"   "<<q<<"   "<<r<<endl;
    cout<<"location of 1st index of the arr: "<<&arr[1]<<"   "<<arr+1<<endl;
    cout<<"print *(arr)+1 i.e (value at index 0)+1: "<<*(arr)+1<<endl;
    cout<<"print *(arr+1) i.e value at index 1: "<<*(arr+1)<<endl;     //arr[0] address + 1*4(bytes)
    cout<<"print *(arr+2) i.e value at index 2: "<<*(arr+2)<<endl;     //arr[0] address + 2*4(bytes)
    cout<<"similarly we ccan say *(arr+i)=arr[0+i] and so *(i[arr])=0+i[arr]"<<endl;
    cout<<"at index 2 we can say arr[3]==3[arr]: "<<arr[3]<<" "<<3[arr];

}