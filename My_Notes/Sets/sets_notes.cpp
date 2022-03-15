#include <iostream>
#include<set>
using namespace std;
void print(set<int>&s)
{
    for(auto value :s)
    {
        cout<<value<<' ';
    }
    cout<<endl;
}
int main()
{
    set<int>s;
    s.insert(100);
    s.insert(20);
    s.insert(30);
    s.insert(20);
    s.insert(10);
    s.insert(10); //O(log(n))
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<(*it)<<' ';
    }
    cout<<endl;
    auto itt=s.find(100);  //O(log(n))
    if(itt==s.end())
    {
        cout<<"No such value";
    }
    else{
        cout<<*itt<<endl;
    }
    print(s);
    s.erase(itt);//takes iterator or key as input and directly erases the key value
    print(s);
    return 0;
}