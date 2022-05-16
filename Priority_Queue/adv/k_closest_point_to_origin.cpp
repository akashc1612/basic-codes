typedef pair<int,vector<int>> pr;
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pr>v1;
        for(int i=0;i<points.size();i++)
        {
            pr p;
            p.first=((pow(points[i][0],2))+(pow(points[i][1],2)));
            p.second.push_back(points[i][0]);
            p.second.push_back(points[i][1]);
            v1.push_back(p);
        }
        sort(v1.begin(),v1.end());
        vector<vector<int>>v;
        int count=0;
         for(int i=0;i<v1.size();i++)
         {
             cout<<v1[i].first<<' '<<v1[i].second[0]<<' '<<v1[i].second[1]<<endl;
         }
        for(int i=0;i<v1.size();i++)
        {
          if(count<k)
          {
              v.push_back({v1[i].second[0],v1[i].second[1]});
              count++;
          }
            else{
                break;
            }
        }
         
        return v;
    }
};