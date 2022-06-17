int findFrequency(vector<int> v, int x){
    // Your code here
    unordered_map<int,int>mp;
    for(int i=0;i<v.size();i++)
    {
        if(x==v[i])
        mp[x]++;
    }
    if(mp.find(x)!=mp.end())
    {
         unordered_map<int,int>::iterator it;
         it=mp.find(x);
         return it->second;
    }
    return 0;
}