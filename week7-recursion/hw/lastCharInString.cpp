//last character in the character array

#include<iostream>
#include<string.h>
using namespace std;

int lastOcc(string &s,char &find,int i,int &ans)
{
    //base case
    if(i>=s.size())
        return ans;
    //ek case ka solution
    if(s[i]==find)
        ans=i;
    //recurison
    return lastOcc(s,find,i+1,ans);
}

int main()
{
    //1.using function
    
    // char strr[]="abcqrst";
    // char * poi;
    // poi=strrchr(str,'s');
    // cout<<"last occurence of char 's': "<<poi-str+1;
    // return 0;

    //2.using recursion
    string s="char vs string";
    int i=0;
    char find='s';
    int ans=-1;
    int answer=lastOcc(s,find,i,ans);  
    cout<<"last occurence of char '"<<find<<"' in the given string is: "<<answer<<endl;  
}