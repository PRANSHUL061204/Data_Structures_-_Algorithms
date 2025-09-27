#include <iostream>
using namespace std;
int main()
{
    /*Array*/
  /*  int a[5];   Static array*/
    int a[]={10,11,12,13,14}; /*-> dynamic array*/
    int n,size;
    n=sizeof(a)/sizeof(int);
    /* &a and &a[0] will represent the address of first element of Array.*/
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        cout<<a[i]<<endl;
    }
}