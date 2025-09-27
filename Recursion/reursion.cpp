#include <iostream>
using namespace std;
void show()
{
    cout << "Hii!!" <<"   ";
    show();
}
int main()
{
    show();
    return 0;
}