#include <iostream>
using namespace std;
void disp(int n)
{
    if (n == 0)
        return;
     disp(n - 1);
           cout<< n <<" ";
}
int main()
{
    int no;
    cout << "Enter the Numbers you want to Print:";
    cin >> no;
    cout << "\n";
    disp(no);
}