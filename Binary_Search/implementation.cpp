class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==1 and nums[0]==target)
        {
            return 0;
        }
        int si=0;
        int ei=nums.size()-1;
        while(ei>=si)
        {
            int mid=si+((ei-si)/2);
            if(nums[mid]==target)
            {
                return mid;
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
        return -1;
    }
};