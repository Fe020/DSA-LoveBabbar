#include<iostream>
using namespace std;
int main()
{

//pyramid
//       * 
//      * *
//     * * *
//    * * * *
//   * * * * *

// for(int i=0;i<5;i++)
// {
//     for(int j=5;j>=i;j--)
//     {
//         cout<<" ";
//     }
//     for(int j=0;j<=i;j++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
// }





// upside down inverted pyramid
// * * * * * 
//  * * * *
//   * * *
//    * *
//     *

// for(int i=0;i<5;i++)
// {
//     for(int j=0;j<i;j++)
//     {
//         cout<<" ";
//     }
//     for(int j=5;j>i;j--)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
// }




//diamond
//     * 
//    * *
//   * * *
//  * * * *
// * * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *

for(int i=0;i<=10;i++)
{
    if(i<5)
    {
        for(int j=5;j>i+1;j--)
        {
            cout<<" ";          //space in first 5 rows
        }
        for(int j=0;j<=i;j++)
        {
            char ch='A'+j;
            cout<<ch<<" ";         //star in first 5 rows
        }
        
    }
    else if(i>=5)
    {
        for(int j=5;j<i;j++)
        {
            cout<<" ";          //space in last 5 rows
        }
        for(int j=10;j>i;j--)
        {
            char ch='A'+j-6;
            cout<<ch<<" ";         //star in last 5 rows
        }
    }
    cout<<endl;
}




//only first and last of a pyramid
//      * 
//     * *
//    *   *
//   *     *
//  *       *

// for(int i=0;i<5;i++)
// {
//     for(int j=5;j>i;j--)
//     {
//         cout<<" ";
//     }
//     for(int j=0;j<=i;j++)
//     {
//         if(j==0 || j==i)
//         {
//             cout<<"* ";
//         }
//         else
//         cout<<"  ";
//     }
//     cout<<endl;
// }
}