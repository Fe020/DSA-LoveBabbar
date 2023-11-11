//tyoe casting means converting data types from one to another either implicitly(by cpp) or explicitly(by us)

#include<iostream>
using namespace std;

int main()
{
    // operations sath m perform krne p:
    // char change hota int m
    // int change hota float m
    // char change hota int m aur int float m


//char to int                   //char promoted to int then ans in  int or char according to the result datatype
    // char a='A';              // asciii value of A = 65
    // int b=2;
    // int result = a + b;      //int=65+2,char=C
    // cout<<result<<endl;      //67


//int to char                   //char promoted to int then ans in  int or char according to the result datatype
    // char a='0';                 //ascii value of 0 = 48
    // int b=4;        
    // char result= a+b;           // 48+4
    // cout<<result<<endl;         //int=52 char(at 52) =4


//float to int
    // int a=131.25;
    // float b=52.5;                 
    // int result= a/b;            //int/float= float = 131.25/52.5=2.5
    // cout<<result<<endl;


//char to float
    // char a='A';
    // float b= 7.65;
    // float result = a+b;          //char+float=(char to)int+float
    //     // int result= a+b;
    // cout<<result<<endl;


//float to char
    char a='a';
    float b=3.3333;
    char result= a+b;               //65.0+3.333=68.3333 ||char(68.333)=char(68)=d
    cout<<result<<endl;
}