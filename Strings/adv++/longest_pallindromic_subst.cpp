class Solution {
public:
    int expand(string s,int i,int j,int n)
    {
        while(i>=0 && j<n && s[i]==s[j])
        {
                i--;
                j++;  
        }
        return j-i-1;
    }
    string longestPalindrome(string s) {
        
        int n=s.length();
        if(n<=1)
        {
            return s;
        }
        int si=0,ei=0;
        for(int i=0;i<n;i++)
        {
            int length1=expand(s,i,i,n);
            int length2=expand(s,i,i+1,n);
            int maxlength=max(length1,length2);
            
            if(ei-si+1<maxlength)
            {
                si=i-((maxlength-1)/2);
                ei=i+(maxlength/2);
            }
        }
        
       return s.substr(si,ei-si+1);
    }
};