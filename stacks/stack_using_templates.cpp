#include<iostream>
using namespace std;
template <typename T>
class stackimplement{
  T *arr;
  int nextindex=0;
  int capacity;
  public:
  stackimplement(int size)
  {
      arr=new T[size];
      capacity=size;
  }
  void push(T data)
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
    stackimplement<int>s1(4);
    s1.push(2);
    s1.push(4);
    s1.push(5);
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    s1.print();
     stackimplement<float>s2(4);
    s2.push(2.3);
    s2.push(4.5);
    s2.push(5.9);
    s2.print();
    return 0;
}