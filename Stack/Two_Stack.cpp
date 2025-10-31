#include<iostream>
using namespace std;
#define Size 10
class Two_Stack{
    int arr[Size];
    int top1,top2;
    public:
    Two_Stack(){
        top1=-1;
        top2=Size;
    }
    void push1(int x){
        if(top1<top2-1)
        arr[++top1]=x;
        else
        cout<<"Stack Overflow!\n";
    }
    void push2(int x){
        if(top1<top2-1)
        arr[--top2]=x;
        else
        cout<<"Stack Overflow!\n";
    }
    void pop1(){
        if(top1 > -1){
            cout<<"\nPopped Element is: "<<arr[top1--]<<endl;
            // top1--;
        }
        else
        cout<<"Stack Underflow"<<endl;
    }
    void pop2(){
        if(top2<Size){
            cout << "\nPopped Element is: " << arr[top2--] << endl;
            // top2--;
        }
        else
        cout<<"Stack Underflow"<<endl;

    }
    void display()
    {
        for(int i=0;i<Size;i++)
    cout<<arr[i]<<" ";    }

};
  int main(){
    
    Two_Stack S1;
    S1.push1(25);
    S1.push1(52);
    S1.push1(45);
    S1.push1(26);
    S1.push1(88);
    S1.push2(14);
    S1.push2(28);
    S1.push2(42);
    S1.push2(56);
    S1.pop1();
    S1.push1(86);
    S1.push2(90);
    S1.pop2();

    S1.display();

}