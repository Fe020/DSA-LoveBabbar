//how array are passed in the functions


//array is not passed in the function instead its pointer is passed so when we try to print the size of the array inside the function it gives the value 8(because the size of pointer in 8-bit architecture is 8) not that we are getting in main function

//When we pass an array to a function in C++, it decays into a pointer. So, arr inside the function is a pointer to the original array. When you take &arr inside the function, you are getting the address of that pointer, which is different from the address of the original array in the main function


#include <iostream>
using namespace std;
int pointers(int arr[])
{

    //size of array
    cout<<"size of the array (inside function): "<<sizeof(arr)<< " bytes"<<endl;
    //address of 1st element of the array
    cout<<"address of arr(inside function): "<<arr<<endl;
    //address of 1st element of the array
    cout<<"address of &arr(inside function): "<<&arr<<endl;
    //When we pass an array to a function in C++, it decays into a pointer. So, arr inside the function is a pointer to the original array. When you take &arr inside the function, you are getting the address of that pointer, which is different from the address of the original array in the main function.
    return 0;
}

int main() {
    // Write C++ code here
    int arr[5]={10,20,30,40,50};
    //size of array
    cout<<"size of the array (inside main): "<<sizeof(arr)<< " bytes"<<endl;
    //address of 1st element of the array
    cout<<"address of arr (inside main): "<<arr<<endl;
    //address of 1st element of the array
    cout<<"address of &arr (inside main): "<<&arr<<endl;

    cout<<endl;
    cout<<endl;

    pointers(arr);
}