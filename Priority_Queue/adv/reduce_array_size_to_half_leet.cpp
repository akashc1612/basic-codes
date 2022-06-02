bool comp(pair<int,int>a,pair<int,int>b)
{
    if(b.second<a.second)
        return true;
    return false;
}
class Solution {
public:
    int minSetSize(vector<int>& arr) {
       vector<pair<int,int>>v;
        unordered_map<int,int>mymap;
        unordered_map<int,int>::iterator it;
        for(int i=0;i<arr.size();i++)
        {
           mymap[arr[i]]++;
        }
         for(it=mymap.begin();it!=mymap.end();it++)
         {
             v.push_back(*it);
         }
        sort(v.begin(),v.end(),comp);
        int count=0,sum=0;
        int size=(arr.size()/2);
        for(int i=0;i<v.size();i++)
        {
            if(sum>=size)
            {
                break;
            }
            else{
            sum=sum+v[i].second;
            count=count+1;    
            }
        }
        return count;
    }
};