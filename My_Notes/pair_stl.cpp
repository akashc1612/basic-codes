#include <iostream>
using namespace std;

int main()
{
    pair<int,int>p;
   //taking input
   p=make_pair(2,4);
   //taking pair
   p={99,100};
   cout<<p.first<<' '<<p.second<<endl;
   //updation of value of pair 
   p.first=10;
   p.second=100;
   cout<<p.first<<" "<<p.second<<endl;
    return 0;
}