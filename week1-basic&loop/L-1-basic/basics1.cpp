// sizeof,operators,printing ascii value,taking input


#include<iostream>
using namespace std; 
int main()
{
    int a=5;
    char b = '9';
    float c= 2.69;
    double d= 2.69;
    bool e=true;
    // char f='999';
    // cout<<"size"<<sizeof(f)<<endl;
    
    // size of a variable/datatype
    cout<<"size of all above datatypes: "<<sizeof(a)<< " bytes for a(int)\n and "<<sizeof(b)<< " byte for b(char) \n and "<<sizeof(c)<<" bytes for c(float)\n and "<<sizeof(d)<<" bytes for d(double)\n and "<<sizeof(e)<<" byte for e(bool)"<<endl;
    cout<<"\n";


    //printing ascii value
    char ASCII_100=100;     //it will store the character at ascii value=100
    cout<<"ascii value of 100="<<ASCII_100<<endl;
    cout<<"\n";

    //arithmetic operator: +,-,*,%,/
    //relational operator:>,<,>=,<=,!=,==
    int z= 33;
    cout<<"for a =5 z=33 if a>z is true then print 1 else 0 :   "<<(a>z)<<endl;       //5  0
    cout<<"for a =5 z=33 if a<=z is true then print 1 else 0 :   \n"<<(a<=z)<<endl;     //0  1
    //assignment operator: =
    //logical operator: ||,&&,!
    if(a>3 && z<100)        //and operator
    cout<<"OK"<<endl;
    if(a>=5 || z<=100)      //or operator
    cout<<"done"<<endl;
    int y=0;                //not operator coverts 0 to 1 and any integer to 0
    cout<<a<<" "<<y<<endl;
    cout<<!a<<" "<<!y<<endl;
    cout<<"\n";

    // taking inpput
    int x;
    cout<<"enter value of x: "<<endl;
    cin>>x;
    cout<< "x is :"<<x<<endl;
}
