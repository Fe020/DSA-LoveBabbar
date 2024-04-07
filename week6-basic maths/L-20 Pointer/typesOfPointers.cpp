#include<iostream>
using namespace std;
int main(){
    //wild pointer: pointers that are not initialized or deleted or points to a non-existing variable


    //void pointer: can point to any data type
    int x=79;
    void* ptr;
    ptr=&x;     //or just write void* ptr=&x;
    int* ip=static_cast<int*>(ptr);     //static_cast(data type1)<expression> is used to convert data type of expression from null to data type 1
    cout<<*ip<<endl;

    
    //

    return 0;
}