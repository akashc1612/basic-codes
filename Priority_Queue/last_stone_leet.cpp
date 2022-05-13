
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size()==1)
        {
            return stones[0];
        }
        priority_queue<int>maxh;
        for(int i=0;i<stones.size();i++)
        {
            maxh.push(stones[i]);
        }
        
        while(maxh.size()>1)
        {
            int w1=maxh.top();
            maxh.pop();
            int w2=maxh.top();
            maxh.pop();
           
            if(w2>w1)
            {
                maxh.push(w2-w1);
            }
            else
                maxh.push(w1-w2);
        }
        
        if(maxh.size())
        {
            return maxh.top();
        }
        else
            return 0;
    }
};