#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack <int> s;
    s.push(12);
    s.push(20);
    s.push(14);
    cout<< "Top Element is: "<<s.top()<<endl;
    s.pop();
    cout<<" Top after Popping is:"<<s.top()<<endl;
    while(!s.empty())
    {
        cout<<s.top()<<"  ";
        s.pop();
    }
// Functions of Library stack are: Push(),Pop(),Top(); Display is done with the help of Top & Pop;
}