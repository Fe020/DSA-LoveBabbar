#include<iostream>
using namespace std;
void merge(int arr[],int s,int e)
{
    //find mid
    int mid=(s+e)/2;
    int leftArrSize=mid-s+1;
    int rightArrSize=e-mid;

    // make 2 array in heap memory(see bottom)
    int *leftArr=new int[leftArrSize];
    int *rightArr=new int[rightArrSize];
    
    //copy value of left and right array from the main array
    int k=s;
    for(int i=0;i<leftArrSize;i++)
    {
        leftArr[i]=arr[k];
        k++;
    }
    int k1=mid+1;
    for(int i=0;i<rightArrSize;i++)
    {
        rightArr[i]=arr[k1];
        k1++;
    }

    //apply merging
    int leftArrInd=0;
    int rightArrInd=0;
    int mainArrInd=s;
    while(leftArrInd<leftArrSize && rightArrInd<rightArrSize)
    {
        if(leftArr[leftArrInd]>rightArr[rightArrInd])
        {
            arr[mainArrInd]=rightArr[rightArrInd];
            rightArrInd++;
            mainArrInd++;
        }
        else
        {
            arr[mainArrInd]=leftArr[leftArrInd];
            leftArrInd++;
            mainArrInd++;
        }
    }
    while(rightArrInd<rightArrSize)
    {
        arr[mainArrInd]=rightArr[rightArrInd];
        rightArrInd++;
        mainArrInd++;
    }
    while(leftArrInd<leftArrSize)
    {
        arr[mainArrInd]=leftArr[leftArrInd];
        leftArrInd++;
        mainArrInd++;
    }
    delete[] leftArr;
    delete[] rightArr;

}
void mergeSort(int arr[],int s,int e)
{
    if(s>=e)
        return;
    //break
    int mid=(s+e)/2;
    //recursive call
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    // merge/join all the elements
    merge(arr,s,e);
}
int main()
{
    int arr[5]={5,4,2,3,1};
    int s=0,size=5;
    mergeSort(arr,s,size-1);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}



//when we run a code and allocate some memory to it
//it can be allocated in 2 ways:
// 1.stack memory-a. not much space allocated, b. static memory allocation
// 2. heap memory-a.very large space of memory available here, b. dynamic memory allocation
//so usually when we are required to have more number of memory allocations we use heap memory using the 'new' keyword
//initialization- 1. stack-int arr[10] 2. heap- int*ptr=new int[10]; 