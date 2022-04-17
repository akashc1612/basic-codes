class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        
        string ans;
        int max=INT_MIN;
        for(int i=0;i<N;i++)
        {
            int val=arr[i].size();
            if(val>max)
            {
                max=val;
                ans=arr[i];
            }
        }
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<ans.length();j++)
            {
                if(ans[j]!=arr[i][j])
                {
                    ans=arr[i].substr(0,j);
                    break;
                }
            }
        }
        if(!ans.length())
        {
            return "-1";
        }
        return ans;
        
    }       
};