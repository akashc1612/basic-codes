#include <iostream>
#include<queue>
using namespace std;

int main()
{

//creating a max heap
 priority_queue<int>maxh;
 maxh.push(10);
 maxh.push(110);
 maxh.push(101);
 maxh.push(201);
 maxh.push(20);
  for(int i=0;i<5;i++)
 {
     cout<<maxh.top()<<' ';
     maxh.pop();
 }
 cout<<endl;
 //creating a min heap
 priority_queue<int,vector<int>,greater<int>>minh;
 minh.push(211);
 minh.push(201);
 minh.push(200);
 minh.push(2);
 minh.push(220);
 for(int i=0;i<5;i++)
 {
     cout<<minh.top()<<' ';
     minh.pop();
 }

    return 0;
}