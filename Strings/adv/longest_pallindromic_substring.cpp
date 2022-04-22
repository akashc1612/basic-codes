#include<climits>
string longestPalinSubstring(string str)
{
    // Write your code here.
	 bool flag=1;
        string ans;
        int count=0;
        int max=INT_MIN;;
        for(int i=0;i<str.length();i++)
        {
            for(int j=i;j<str.length();j++)
            {
				flag=1;
                int p=i;
                int q=j;
                count=0;
                while(p<=q)
                {
                    if(str[p]==str[q])
                    {
                        if(p==q)
                        {
                            count=count+1;
                        }
                        else
                            count=count+2;
                        
                        p++;
                        q--;
                    }
                    else{
                        flag=0;
						break;
                    }
                }
                if(flag)
                {
                    if(count>max)
                    {
                        ans=str.substr(i,count);
                        max=count;
                    }
                }
                
            }
        }
        return ans;
    }
