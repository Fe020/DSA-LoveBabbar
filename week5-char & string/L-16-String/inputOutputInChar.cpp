#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char ch[100];
    // cout<<"enter the elemnts of the string ch: ";`
    // cin>>ch;
    //to read line with spaces we use cin.getline(character name,max characters)
    cout<<"enter the elemnts of the char ch: ";
    cin.getline(ch,100);
    
    cout<<"elements of the char are: "<<ch;
    cout<<endl<<endl;
    cout<<"0th index ch is: "<<(int)ch[0]<<endl<<endl;
    cout<<"the index where the string ends, the character just after it is assigned as null ch, with ASCII value 0, so by explicit datatype converstion, it must be 0."<<endl<<endl;
    int n=strlen(ch);
    cout<<"The srting length: "<<n<<endl;
    cout<<"ASCII value of character at index "<<n<<" is :"<<(int)ch[n];

    
}