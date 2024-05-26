//at every index (i), we find the minimum from (i+1) to the end of array(v.size())
//and replace that minimum to the index i element.
//that is swap(v[i], v[min])

//jis element p h, uske aage ka minimum element khoj ke present elemnt se swap kr dete h


#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
void swap(int &i,int &j)
{
    int temp;
    temp=i;
    i=j;
    j=temp;
}
int main()
{
    vector<int> v={7,13,-7,5,4,2,1,0};
    for(int i=0;i<v.size();i++)
    {
        int mini=i;     //kyuki aage ke minimum se compare krna h ise
        for(int j=i+1;j<v.size();j++)
        {
            if(v[j]<v[mini])
                mini=j;
        }
        swap(v[mini],v[i]);
    }
    for(auto i: v)
    {
        cout<<i<<" ";
    }
    
}