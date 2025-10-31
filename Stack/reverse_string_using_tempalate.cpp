#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<char> s;
    string str;
    cout<<"Enter a String";
    cin>>str;
    cout<<"String you Enterd is: "<<str<<endl;
    for(char c : str)
    s.push(c);
    cout<<"Reversed String is "<<endl;
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
}