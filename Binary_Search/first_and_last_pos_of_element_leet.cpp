class Solution {
public:
    int first(vector<int>& nums, int target)
    {
        int ans=-1;
        int si=0;
        int ei=nums.size()-1;
        while(ei>=si)
        {
            int mid=si+((ei-si)/2);
            if(nums[mid]==target)
            {
                ans=mid;
                ei=mid-1;
            }
            else if(nums[mid]>target)
            {
                ei=mid-1;
            }
            else if(nums[mid]<target)
            {
                si=mid+1;
            }
        }
        return ans;
    }
    int last(vector<int>& nums, int target)
    {
        int ans=-1;
        int si=0;
        int ei=nums.size()-1;
        while(ei>=si)
        {
            int mid=si+((ei-si)/2);
            if(nums[mid]==target)
            {
                ans=mid;
                si=mid+1;
            }
            else if(nums[mid]>target)
            {
                ei=mid-1;
            }
            else if(nums[mid]<target)
            {
                si=mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
         vector<int>v;
        if(nums.size()==1 and nums[0]!=target)
        {
            v.push_back(-1);
            v.push_back(-1);
            return v;
        }
        else if(nums.size()==1 and nums[0]==target)
        {
             v.push_back(0);
            v.push_back(0);
            return v;
        }
        int ans1=first(nums,target);
        int ans2=last(nums,target);
       
        v.push_back(ans1);
        v.push_back(ans2);
        return v;
    }
};