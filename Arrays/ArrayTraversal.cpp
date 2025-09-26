#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter Size of Array: ";
    cin>>size;
    int a[size];
    cout<<"\nEnter "<<size<<" Elements of Array: \n";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"\n Traversing Array: ";
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<' ';

    }
}