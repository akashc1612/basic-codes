typedef pair<int,pair<int,int>> pi;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.size()==1 && k==1)
        {
            vector<int>v;
            v.push_back(nums[0]);
            return v;
        }
        unordered_map<int,int>mp;
        unordered_map<int,int>::iterator it;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        vector<pi>v1;
        for(it=mp.begin();it!=mp.end();it++)
        {
            v1.push_back({it->second,{it->first,it->second}});
        }
        priority_queue<pi,vector<pi>,greater<pi>>minh;
        for(int i=0;i<v1.size();i++)
        {
            minh.push(v1[i]);
            if(minh.size()>k)
            {
                minh.pop();
            }
        }
        vector<int>v;
        while(minh.size())
        {
            v.push_back(minh.top().second.first);
            minh.pop();
        }
        return v;
    }
};