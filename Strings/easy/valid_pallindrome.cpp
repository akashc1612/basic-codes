class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        if(n<=1)
        {
            return true;
        }
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]=s[i]+32;
            }
            if(s[i]>='a' && s[i]<='z' || s[i]>='0' && s[i]<='9')
            {
                ans+=s[i];
            }
        }
        int si=0,ei=ans.length()-1;
        while(si<=ei)
        {
            if(ans[si]!=ans[ei])
            {
                return 0;
            }
            si++;
            ei--;
        }
           return 1;
    }
};