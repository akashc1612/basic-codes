class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        int ans=0;
        int prev=0;
        int curr=0;
        for(int i=0;i<str.length();i++)
        {
    
            if(str[i]=='I')
            {
                curr=1;
            }
            if(str[i]=='V')
            {
                curr=5;
            }
            if(str[i]=='X')
            {
                curr=10;
            }
            if(str[i]=='L')
            {
                curr=50;
            }
            if(str[i]=='C')
            {
                curr=100;
            }
            if(str[i]=='D')
            {
                curr=500;
            }
            else if(str[i]=='M')
            {
                curr=1000;
            }
            if(curr<=prev)
            {
                ans=ans+curr;
                prev=curr;
            }
            else{
                ans=ans-prev;
                ans=ans+(curr-prev);
                prev=curr;
                

            }
        }
        return ans;
    }
};