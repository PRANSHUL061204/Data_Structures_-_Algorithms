#include<iostream>
using namespace std;
struct stack{
    char data;
    stack* next;
};
int main()
{
  stack *top=NULL;
  char ar[] = "!!dlroW olleH";
  int n= sizeof(ar)/sizeof(char);
  cout<<"Pushing String into the Stack\n";
  for(int i=0;i<n;i++){
  stack *temp = new stack();
  temp->data = ar[i];
  temp->next = top;
  top = temp;
  }
  cout<<"\nRetreiving String from the Stack: ";
  while(top!=NULL)
  {
      cout << top->data;
      stack *temp = top;
      top = top->next;
      delete temp;
  }
}