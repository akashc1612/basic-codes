  class Solution{
    public:
    long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
        // Your code goes here
        priority_queue<int>maxh;
        for(int i=0;i<N;i++)
        {
            maxh.push(A[i]);
            if(maxh.size()>K1)
            {
                maxh.pop();
            }
        }
        int num1=maxh.top();
        while(maxh.size())
        {
            maxh.pop();
        }
        
         for(int i=0;i<N;i++)
        {
            maxh.push(A[i]);
            if(maxh.size()>K2)
            {
                maxh.pop();
            }
        }
        int num2=maxh.top();
        long long int sum=0;
        for(int i=0;i<N;i++)
        {
            if(A[i]>num1 && A[i]<num2)
            {
                sum=sum+A[i];
            }
        }
        return sum;
    }
};