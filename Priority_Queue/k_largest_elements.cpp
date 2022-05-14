#include<queue>
vector<int> kLargest(int input[], int n, int k){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
 priority_queue<int,vector<int>,greater<int>>minh;
    for(int i=0;i<n;i++)
    {
        minh.push(input[i]);
        if(minh.size()>k)
        {
            minh.pop();
        }
    }
    vector<int>v;
    while(minh.size()>=1)
    {
        v.push_back(minh.top());
        minh.pop();
    }
    return v;
}
