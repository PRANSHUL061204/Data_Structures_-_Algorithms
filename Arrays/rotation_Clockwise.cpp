#include <iostream>
using namespace std;
int main()
{    
  // Right Shifting i.e ClockWise Shifting Of Array
    /*Array*/
  /*  int a[5];   Static array*/
    int a[]={10,11,12,13,14};
    int n=sizeof(a)/sizeof(int); /*14,10,11,12,13*/
    int temp=a[n-1];
    int x;
    for( int i=n-1;i>=0;i--)
    {   
    
      a[i+1]=a[i];
      
    }
    a[0]=temp;
    for(int i=0;i<=4;i++)
    cout<<a[i]<<endl;
}