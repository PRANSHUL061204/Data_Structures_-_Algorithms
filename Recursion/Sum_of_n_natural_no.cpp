#include <iostream>
using namespace std;
int sum(int x)
{
    if (x == 1)
        return 1;
    else
        return x + sum(x - 1);
}

int main()
{
    int n;
    cout << "Enter the Number that you want for Sum:" << endl;
    cin >> n;
    cout << "Sum of " << n << " Natural No. is:" << sum(n);
}
