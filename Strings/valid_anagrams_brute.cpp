class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        {
            return false;
        }
        bool flag=1;
        for(int i=0;i<s.length();i++)
        {
           for(int j=0;j<s.length();j++)
           {
               if(s[i]==t[j])
               {
                   t[j]='\0';
                   flag=1;
                   break;
               }
               else{
                   flag =0;
               }
           }
            if(flag==0)
            {
                return false;
            }
        }
      return true;
    }
};