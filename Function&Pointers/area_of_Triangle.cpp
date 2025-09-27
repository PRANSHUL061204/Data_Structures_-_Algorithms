#include <iostream>
using namespace std;
int area(int h, int b)
{
    return 0.5 * h * b;
}

int main()
{
    int height, base;
    cout << "Enter the Height & Base: ";
    cin >> height >> base;
    ;
    cout << "Area of Triangle is: " << area(height, base) << endl;
    return 0;
}