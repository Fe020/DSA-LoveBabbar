//Linear Search using array

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5]={1,2,4,6,8};
//     int target=6;
//     bool flag=0;
//     //0= not found
//     //1= found
    
//     for(int i=0;i<5;i++)
//     {
//         if(arr[i]==target)
//         {
//             flag=1;
//             cout<<target<<" is found at index "<<i<<endl;
//             break;
//         }
//     }
//     if(flag==1){
//     cout<<"target found"<<endl;}
//     else if(flag==0){
//     cout<<"target not found"<<endl;};
// }



//Linear Search Using Function and array

#include<iostream>
using namespace std;

bool LinearSearch(int arr[],int size, int target)
{
    for(int i=0;i<size;i++)
    {
        if(target==arr[i])
        {
            cout<<target<<" is found at index: "<<i<<endl;
            return true;
        }
    }
    return false;
}

int main()
{
    int a[5]={2,4,5,6,7};
    int n=5;
    int find=5;
    bool check= LinearSearch(a,n,find);
    if(check==false)
    cout<<"not found"<<endl;
    else if(check==true)
    return 0;
    // cout<<check<<endl;
}