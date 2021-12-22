#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v1;
    v1.push_back(20);
    int j=11;
    for(int i=0;i<9;i++)
    {
        v1.push_back(j);
        j+=3;
    }
    for(int i=0;i<10;i++)
    {
        cout<<v1[i]<<endl;
    }
    cout<<v1.capacity()<<endl;
    cout<<v1.size();
    
    return 0;
}
