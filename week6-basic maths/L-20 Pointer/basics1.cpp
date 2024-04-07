#include<iostream>
using namespace std;
int main()
{
    int abc = 97;
    cout<<abc<<endl;    //value at char abc
    cout<<&abc<<endl;   //address of abc
    int* p= &abc;       //p is a pointer to integer data
    cout<<p<<endl;    //value of pointer 'p' storing address of char abc
    cout<<*p<<endl;     //value at address that the pointer p points
    p+=1;     //4 bytes difference
    cout<<p<<endl;
    cout<<*p<<endl;     //trying to access some random memory at poiner(location) p+1
    
    cout<<endl;
    
    //refrence variable
    int& refVar = abc;
    cout<<"refVar= "<<refVar<<endl;
    refVar = abc + 1;
    cout<<"updated abc= "<<abc<<endl;
    cout<<"updated refVar= "<<refVar<<endl;

    cout<<endl;

    int x = 100;
    int* y = &x;      // y is a pointer storing the address of x
    int* z = y;       // z is assigned the value stored in y
    
    cout << y << endl; // value (address) stored in pointer y
    cout << *y << endl;// value at the address stored in pointer y
    cout << &y << endl;// address of the pointer y
    
    cout << z << endl; // value (address) stored in pointer z
    cout << *z << endl;// value at the address stored in pointer z
    cout << &z << endl;// address of the pointer z



    return 0;
}