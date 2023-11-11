
#include<iostream>
using namespace std;
int main()
{


// square

    // ****
    // ****
    // ****
    // ****

    // for(int i=0;i<4;i++)
    // {

    //  for(int j=0;j<4;j++)
    //  {
    //     cout<<"*";
    //  }
    //  cout<<endl;
    // }





//half pyramid

// *
// **
// ***
// ****
    // for(int i=0;i<5;i++)
    // {
    //     for(int j=0;j<i;j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }





//inverted half pyramid
// *****
// ****
// ***
// **
// *
// or
// 12345
// 1234
// 123
// 12
// 1
    for(int i=5;i>0;i--)
    {
        for (int j=1;j<i+1;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }





//hollow rectangle

// * * * * * 
// *       *
// *       *
// *       *
// * * * * *
    // for(int i=0;i<5;i++)
    // {
        
    //         if(i==0 || i==4)
    //         {
    //             for(int j=0;j<5;j++)
    //             {
    //                 cout<<"* ";
    //             }
    //         }  
    //         else
    //         {
    //             cout<<"*       *";
    //         }
    //     cout<<endl;
    // }
}



