class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<pair<int,int>>v1;
        for(int i=0;i<arr.size();i++)
        {
            pair<int,int>p;
            p.first=abs(x-arr[i]);
            p.second=arr[i];
            v1.push_back(p);
        }
        sort(v1.begin(),v1.end());
        vector<int>v;
        int count=0;
        for(int i=0;i<v1.size();i++)
        {
            if(count<k)
            {
                v.push_back(v1[i].second);
                count++;
            }
            else{
                break;
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
        
};