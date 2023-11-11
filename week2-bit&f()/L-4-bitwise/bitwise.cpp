#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int a=2;    //in bits: 2=10
    int b=3;    //in bits: 3=11

    //AND
    cout<<"bitwise AND of 2 and 3: "<<(2&3)<<endl;

    //OR
    cout<<"bitwise OR of 2 and 3: "<<(2|3)<<endl;


    //NOT
    cout<<"bitwise NOT of 2: "<<~2<<endl;


    //XOR
    cout<<"bitwise XOR of 2 and 3: "<<(2^3)<<endl;
    //for confusioin see bottom
 
    
    
    
    //left shift amd right shift
    
    //left shift: all bits move left by given number of times and at the right end one 0 is added
    cout<<"left shift of 3 by 4 times: "<<(b<<4)<<endl;  // left shift of 3 by 4 times: 11(3) to 110000(48)
    cout<<"left shift of 3 by -4 times: "<<(b<<-4)<<endl;  // left shift of 3 by -4 times: garbage value/ undefined behaviour 
 
    
    
    //right shift: all bits move left by given number of times and at the right end one 0 is added
    int c= 4;
    cout<<"right shift of 4 by 1 times: "<<(c>>1)<<endl;  // right shift of 4 by 1 times: 00...100(4) to 00...10(2)
    cout<<"right shift of -4 by 1 times: "<<(-c>>1)<<endl;  // right shift of -4 by 1 times: 1...100(-4) to 1...10(-2) because it is signed so it can not support very large number (ie 2147483646)
    unsigned int d= 4;
    cout<< "right shift of unsigned -4 by 1 times : "<< (-d>>1)<<endl;  //right shift of -4 by 1 times: 1...100(-4) to 01...10(2147483646)


    




    

    //In C++, the ^ operator is not used for exponentiation; it is used for the bitwise XOR operation. So, when you write 2^3, it's actually performing a bitwise XOR operation between the binary representations of 2 and 3.
    //find unique number form here:30,40,25,30,40,8,8   expected ans is 25 
    cout<<endl<<"unique numbers from here: 30,40,25,30,40,8,8 is XOR of all: "<<(30^40^25^30^40^8^8)<<endl;
    
    
    //NOT of any number 'n' is -(n+1)
    cout<<endl<<"NOT of any number 'n' is -(n+1)"<<endl;
    

    //2 raised to power 3 by using cmath library
    cout <<endl<< "2 raised to the power of 3: " <<pow(a, b) <<endl;



    cout <<endl<< "left shift of n by m will be: n*pow(2,m)"<<endl;



}