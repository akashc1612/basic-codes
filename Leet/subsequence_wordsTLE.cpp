class Solution {
public:
    bool issubseq(string s,string t)
    {
        int j=0;
        int comp=t.size();
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==t[j])
                j++;
        }
        
        if(comp==j)
            return true;
        else
            return false;
            
    }
    int numMatchingSubseq(string s, vector<string>& words) {
        int count=0;
        for(int i=0;i<words.size();i++)
        {
            bool ans=issubseq(s,words[i]);
            if(ans)
                count++;
        }
        return count;
    }
};