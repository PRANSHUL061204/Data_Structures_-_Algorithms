#include<iostream>
using namespace std;
int main()
{
    int a[5], b[5], c[10];
    cout<<"Enter Elements of First Array: ";
    for(int i=0;i<5;i++)
    {cin>>a[i];}
    cout<<"Enter Elements of Second Array: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> b[i];
    }
    for(int i=0;i<10;i++)
    {
        if(i<5)
        c[i]=a[i];
        else
        c[i]=b[i-5];
    }
    for(int i=0;i<10;i++)
    {
        cout<<c[i]<<" ";
    }
}