//here the time complexity is O(n*n!)
///backtracking is simple recursion,jisme recursive call se waps aate time recursion ke effect ko nullify kr diya jeta h                                                  

#include<iostream>
#include<string.h>
using namespace std;
void printPermutation(string &s,int i)
{
    //base case
    if(i>=s.size())
    {
        cout<<s<<" ";
        return ;
    }
    //kaam ki baat
    int j=i;
    while(j<s.size())
    {
        swap(s[i],s[j]);
        //recursion baba
        printPermutation(s,i+1);
        swap(s[i],s[j]);
        j++;
    }
}
        //ye waps se swap krnam hi ek trike se backtracjin
        //here first of all we do something to perform work on(like here in the beginning we didi swapping)
        // and after swapping is donw and recusrion is called we do backtrack that is we are re-swapping the array to not change the actual string                                        
int main()
{
    string s="abc";
    // string t="pqr";
    int index=0;
    printPermutation(s,index);
    cout<<endl;
    // printPermutation(t,index);
}