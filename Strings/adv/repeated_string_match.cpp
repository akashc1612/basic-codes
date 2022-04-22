class Solution {
public:
    int repeatedStringMatch(string a, string b) {
       int min_repeat=(b.length()/a.length());
        string ans="";
        int count=0;
        for(int i=0;i<=min_repeat+2;i++)
        {
            if(ans.find(b)!=string::npos)
            {
                return count;
            }
            else{
                ans=ans+a;
                count=count+1;
            }
        }
        return -1;
        }
        
};