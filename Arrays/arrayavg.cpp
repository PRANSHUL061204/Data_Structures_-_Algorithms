#include <iostream>
using namespace std;
int main()
{
    /*Array*/
  /*  int a[5];   Static array*/
    int a[]={10,11,12,13,14}; 
     int n=sizeof(a)/sizeof(int);
    int avg,sum=0;
    /*-> dynamic array*/
    /* &a and &a[0] will represent the address of first element of Array.*/
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        
    }
    avg=sum/(n);
    cout<<"Average is: "<<avg<<endl;
}