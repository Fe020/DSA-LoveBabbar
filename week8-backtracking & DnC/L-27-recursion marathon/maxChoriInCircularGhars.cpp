#include<iostream>
#include<vector>
using namespace std;

int rob(vector<int> v,int i,int j)
{
    //base case
    if(i>j)
    return 0;
    //rob kro i^th ghar se le kr last ghar tk non-adjecently
    int option1=v[i]+rob(v,i+2,j);
    //rob kro i+1 ghar se le kr last ghar tk non-adjecently
    int option2=0+rob(v,i+1,j);

    return max(option1,option2);

}
int main()
{   
    vector<int> v={1,2,3,4,5,6,7,100,0,0,98};
    int ans;
    if(v.size()==1)
        ans= v[0];
    //0th aur uske non-adjecent gharo me chori krlo excluding last 2nd ghar
    int ans1=rob(v,0,v.size()-2);
    //1st aur uske non-adjecent gharo me chori krlo excluding last ghar
    int ans2=rob(v,1,v.size()-1);
    ans=max(ans1,ans2);
    cout<<"maximum robbery in circular moholla is: "<<ans<<endl;
}