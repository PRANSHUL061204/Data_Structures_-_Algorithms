#include <iostream>
using namespace std;
int area(int r)
{
    int PI = 3.14;
    return PI * r * r;
}

int main()
{
    int radius;
    cout << "Enter the radius of circle: ";
    cin >> radius;
    cout << "Area of circle is: " << area(radius) << endl;
    return 0;
}