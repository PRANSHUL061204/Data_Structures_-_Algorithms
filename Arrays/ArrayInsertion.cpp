#include <iostream>
using namespace std;
int main()
{
    int size,element,pos;
    cout << "Enter Size of Array: ";
    cin >> size;
    int a[size];
    cout << "\nEnter " << size << " Elements of Array: \n";
    for (int i = 0; i < size; i++)   /*2,3,,5,6,7*/
    {
        cin >> a[i];
    }
    cout << "\nEnter Element to be Inserted: ";
    cin >> element;
    cout << "\nEnter Position: ";
    cin >> pos;
    for(int i=size;i>pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=element;
    size++;
     cout<<"\n Array after Insertion: ";
     for(int i=0;i<size;i++)
     {
        cout<<a[i]<<" ";
     }
}