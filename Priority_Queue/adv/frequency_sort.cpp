typedef pair<int,int> pr;
class Solution {
    class compare_fun
    {    
        public:
        bool operator() (const pair<int, int> &a, const pair<int, int> &b) {
          if (a.first == b.first) {
          return a.second < b.second;
    }
          return a.first > b.first;
  }
};
    
    public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
         unordered_map<int,int>::iterator it;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        priority_queue<pr,vector<pr>,compare_fun>maxh;
        for(it=mp.begin();it!=mp.end();it++)
        {
            maxh.push({it->second,it->first});
        }
        vector<int>v;
        while(maxh.size())
        {
            int count=maxh.top().first;
            while(count)
            {
                v.push_back(maxh.top().second);
                count--;
            }
            maxh.pop();
        }
        return v;
    }
};