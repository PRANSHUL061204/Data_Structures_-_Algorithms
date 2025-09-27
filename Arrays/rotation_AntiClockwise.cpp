#include <iostream>
using namespace std;
int main()
{
    // Left Shifting i.e AntiClockWise Shifting Of Array
  /*  int a[5];   Static array*/
    int a[]={10,11,12,13,14};
    int n=sizeof(a)/sizeof(int); /*11,12,13,14,10*/
    int temp=a[0];
    for( int i=0;i<n;i++)
    {   
         a[i]=a[i+1];
      
    }
    a[n-1]=temp;
    for(int i=0;i<=n-1;i++)
    cout<<a[i]<<endl;
}