#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int main()
{
    char s[100];
    cout<<"string is: ";
    cin.getline(s,100);
    int i=0;
        int e=strlen(s)-1;
        while(i<=e)
        {
            swap(s[i],s[e]);
            i++;
            e--;
        }
    cout<<"reversed strting: "<<s;
}