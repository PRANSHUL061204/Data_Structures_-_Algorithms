// A B C D E
// A B C D E
// A B C D E
// A B C D E
// A B C D E
#include <iostream>
    using namespace std;
int main()
{
    int i;
    for (i = 0; i < 5; i++)
    {
        for ( int j = 0; j< 5; j++){
              char ch='A'+ j;
              cout<<ch<<" ";
        }
        cout<<endl;
    }
}