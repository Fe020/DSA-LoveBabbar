#include<iostream>
using namespace std;
int main(){
    char ch[50]="MachineLearning";
    char* p= ch;     
    char* q=&ch[0];     
    // char* r=&ch;    
    cout<<ch<<endl;
    cout<<"address of 1st pointer var: "<<p<<" "<<q<<" "<<*ch<<endl;
}