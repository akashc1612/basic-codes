class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        if(S.length()==0)
        {
            return S;
        }
        int si=0;
        for(int i=0;i<=S.length();i++)
        {
            if(S[i]=='.' || S[i]=='\0')
            {
                int ei=i-1;
                while(ei>si){
                    char temp=S[ei];
                    S[ei]=S[si];
                    S[si]=temp;
                    si++;
                    ei--;
                }
                si=i+1;
            }
        }
        string str;
        str.assign(S);
        int j=0;
         for(int i=S.length()-1;i>=0;i--)
         {
             str[j++]=S[i];
         }
         
         return str;
    } 
};
