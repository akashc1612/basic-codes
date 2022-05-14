#include<queue>
vector<int> kSmallest(int arr[], int n, int k) {
    // Write your code here
    priority_queue<int>maxh;
    for(int i=0;i<n;i++)
    {
        maxh.push(arr[i]);
        if(maxh.size()>k)
        {
            maxh.pop();
        }
    }
    vector<int>v;
    while(maxh.size()>=1)
    {
        v.push_back(maxh.top());
        maxh.pop();
    }
    return v;
}