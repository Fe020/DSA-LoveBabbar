#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
    vector<int> v={3,5,4,2,1,0};
    int n=v.size();
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i;j<n;j++)
        {
            if(v[j]<v[min])
            min=j;
        }
        cout<<"for i= "<<i<<"  min= "<<v[min]<<endl;
        swap(v[i],v[min]);
        for(int m=0;m<n;m++)
        {
            cout<<v[m];
        }
    }
    
}