#include <iostream>
using namespace std;
int main()
{
    /*Array*/
  /*  int a[5];   Static array*/
    int a[]={10,11,12,13,14}; 
    int flag=0;
    /*-> dynamic array*/
    /* &a and &a[0] will represent the address of first element of Array.*/
    for(int i=0;i<4;i++)
    {
        if(a[i]<a[i+1])
        flag=1;
        else
        flag=0;
        
    }
    
    if(flag==1)
    cout<<"Array is Sorted in Ascending order"<<endl;
    else
    cout<<"Array is not Sorted. "<<endl;
    
    
    return 0;

}