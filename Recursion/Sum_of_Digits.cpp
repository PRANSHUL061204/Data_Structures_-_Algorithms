#include <iostream>
using namespace std;
int sum(int x)
{
    if (x == 0)
        return 0;
    else
        return (x % 10) + sum(x / 10);
}
int main()
{
    int x ;
    cout<<"Enter any Number";
      cin>>x;
    cout << "Sum of No. is: " << sum(x);
}