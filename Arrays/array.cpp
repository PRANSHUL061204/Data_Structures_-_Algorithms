#include <iostream>
using namespace std;
int main()
{
    /*Array*/
    int a[10];
    /* &a and &a[0] will represent the address of first element of Array.*/
    for(int i=0;i<5;i++)
    {
        cout<<"Enter a Element for "<<i<<" Position"<<endl;
        cin>>a[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<" Element for "<<i<<" Position is:"<<a[i]<<endl;
        cout<<" Element Address for "<<i<<" Position is:"<<&a[i]<<endl;
        
    }
}