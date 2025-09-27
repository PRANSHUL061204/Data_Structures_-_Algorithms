#include <iostream>
using namespace std;
int main()
{
    /*Array*/
  /*  int a[5];   Static array*/
    int a[]={10,11,72,13,14}; 
    int min=a[0];
    /*-> dynamic array*/
    /* &a and &a[0] will represent the address of first element of Array.*/
    for(int i=1;i<5;i++)
    {
        if(a[i]<min)
        min=a[i];
        
    }
    cout<<"Smallest No. is:"<<min<<endl;
}