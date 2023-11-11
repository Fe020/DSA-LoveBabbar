#include<iostream>
using namespace std;
void digSum(int a[4][4])
{  
    int sum =0;  
    for(int i=0;i<4;i++)
    {
        sum+=a[i][i];
    }
    cout<<"sum of diagonal elements ="<<sum<<endl;
    cout<<endl;
}
    // void digSum(int a[4][4])
    // {  
    //      int sum =0;  
    //      for(int i=0;i<4;i++)
    //      {
    //          for(int j=0;j<4;j++)
    //          {
    //              if(i==j)
    //              {
    //                  sum+=a[i][j];
    //              }
    //          }
    //      }
    //      cout<<"sum of diagonal elements ="<<sum<<endl;
    //      cout<<endl;
    // }




void revDigSum(int a[4][4])
{
    int sum=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i+j==3)
            {
                sum+=a[i][j];
            }
        }
    }
    cout<<"sum of rev diagonal elements ="<<sum<<endl;
    cout<<endl;

}

void print2dArray(int a[4][4])
{
    cout<<"elements of the 2d array are: "<<endl;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        cout<<endl;
    }
}

int main()
{
    int arr[4][4]={{10,20,30,40},{50,60,70,80},{75,95,35,25},{50,55,10,15}};
    print2dArray(arr);
    revDigSum(arr);
}

