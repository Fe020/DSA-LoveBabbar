//global variable- not withing a function
//local variable- within a scope '{}'

//we can access global variable 'x' via '::x'
//inside a fnction we can access most recent local variable, if we don't use ::x


#include<iostream>
using namespace std;
int x=10;   //initialized global var
int y;      //uninitialized global var- when we print UnGV-OS assigns 0 to it(see last output)

void fun()
{
    int x=1000;
    cout<<"local var inside fun inside main fun: "<<x<<endl;      //1000
    cout<<endl;
    cout<<"global var accessing via function inside main function: "<<::x<<endl;      //7
    ::x=69;
    cout<<endl;
    cout<<"manupulated global var accessing via function inside main function: "<<::x<<endl;      //69
    return;
}
int main()
{
    int z1;
    static int z2;
    cout<<"original global variable: "<<x<<endl;;   //10
    ::x=7;
    cout<<endl;
    cout<<"manupulated global variable: "<<x<<endl;;    //7
    int x=28;
    cout<<endl;
    cout<<"local variable: "<<x<<endl;     //28
    cout<<endl;
    fun();
    cout<<endl;
    {
        int x=57;
        cout<<"most local variable: "<<x<<endl; //57
        cout<<endl;
        cout<<"accessing global variable inside a function inside main function fter manupulated by the function named fun: "<<::x<<endl;    //69
    }
    cout<<"Uninitialized global variable y(must be 0): "<<y<<endl;      
    cout<<"Uninitialized local variable z(should be random value): "<<z1<<endl;
    cout<<"Uninitialized local static variable z(smust be 0): "<<z2<<endl;
    return 0;
}