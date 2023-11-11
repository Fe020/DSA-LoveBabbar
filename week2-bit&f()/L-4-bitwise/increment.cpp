#include<iostream>
using namespace std;
int main()
{
    int a=5;
    cout<<++a<<endl;            //phle increment fir use. so phle 5+1=6 ab use krega 6 ko. 6
    int b=5;
    cout<<b++<<endl;            //phle use fir increment. so 5  use krega phir increment hoga. 5

    int y=10;
    cout<<(--y)*10<<endl;       //phle decrement fir use. so y=9. 90
    
    int z=10;
    cout<<(z--)*10<<endl;       //phle use fir decrement. so z=10. 100


    int i=15;
    cout<<(i++)*(++i)<<endl;    //15*((15+1)+1)= 15*17=255
    int j=15;
    cout<<(++j)*(j++)<<endl;    //(15+1)*(16)= 256
}