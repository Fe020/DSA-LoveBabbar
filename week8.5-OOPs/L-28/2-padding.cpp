//padding-OS adds some extra byte to the code , to run the code faster. This process of addinf extra bytes to the code is called padding

//adv-runtime decreases
//disadv- a little wastage of space, but even then this is better

//size of class nikalne k liye,size of max size datatype lo(say size=s) (like double-8 or int-4)
//aur fir sbka size add krlo(say sum=x) fir closest muliplt of s lo >=x 
//now that closest multiple will be the answer

#include<iostream>
#include<string>
using namespace std;
class Student{
    int subham;     //4 bytes
    int prakhar;    //4 bytes
    bool shreya;    //1 byte
    char c;         //1 byte
    void prashad()  //ek function kasize hmesa zero hota h overall code m
    {
        int sonia;
    }
    void x()
    {
        double x;
    }
};

class Code{
    string name;    //isn't it like how we write a class, simiilarly this is a classs defined under #include<string>
};

int main()
{
    Student s1;
    int s=sizeof(s1);   //total sie should be 4+4+1=13 9,but OS will add 3 bytes to it(called padding),to run the code faster
    cout<<s<<endl;
    Code c1;
    int ss=sizeof(c1);
    cout<<ss<<endl;
}