#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;
vector<int> solve(int arr[],int n)
{
    vector<int>v;
    unordered_map<int,int>mymap;
    for(int i=0;i<n;i++)
    {
        if(mymap.count(arr[i])>0)
        {
            continue;
        }
        mymap[arr[i]]=1;
        v.push_back(arr[i]);
    }
    return v;
}
int main()
{
    int arr[10]={10,10,11,12,13,10,12,88,9,11};
    vector<int>v=solve(arr,10);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<' ';
    }

    return 0;
}