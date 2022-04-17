#include <bits/stdc++.h>
using namespace std;

int minCount(int n)
{
	//Write your code here
    
    if(sqrt(n)-floor(sqrt(n))==0)
    {
        return 1;
    }
    if(n<=3)
    {
       return n;    
    }
    int ans=n;
    for(int i=1;i<=n;i++)
    {
        int temp=i*i;
        if(temp>n)
        {
             break;
        }
         ans=min(ans,minCount(n-temp)+1);
    }
    return ans;
}

int main()
{
	int n;
	cin >> n;
	cout << minCount(n);
}