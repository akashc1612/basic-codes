#include<iostream>
using namespace std;
class stackimplement{
  int *arr;
  int nextindex=0;
  int capacity;
  public:
  stackimplement(int size)
  {
      arr=new int[size];
      capacity=size;
  }
  void push(int data)
  {
      if(capacity==nextindex)
      {
          cout<<"Stack is full"<<endl;
      }
      arr[nextindex]=data;
      nextindex++;
  }
  int pop(){
      if(nextindex==0)
      {
          cout<<"Stack is Empty"<<endl;
          return -1;
      }
      return arr[--nextindex];
  }
  int top()
  {
       if(nextindex==0)
      {
          cout<<"Stack is Empty"<<endl;
          return -1;
      }
      return arr[nextindex-1];
  }
  void print()
  {
      for(int i=0;i<nextindex;i++)
      {
          cout<<arr[i]<<endl;
      }
  }
};
int main()
{
    stackimplement s1(4);
    s1.push(2);
    s1.push(4);
    s1.push(5);
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    s1.print();
    return 0;
}