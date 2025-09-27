#include <iostream>
using namespace std;
int main()
{
    /*Array*/
  /*  int a[5];   Static array*/
    int a[]={10,11,72,13,14}; 
    int large=a[0];
    /*-> dynamic array*/
    /* &a and &a[0] will represent the address of first element of Array.*/
    for(int i=1;i<5;i++)
    {
        if(a[i]>large)
        large=a[i];
        
    }
    cout<<"Larger No. is:"<<large<<endl;
}