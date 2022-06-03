class Solution {
public:
    int reverse(int x) {
        if(x==0)
        {
            return 0;
        }
        long int temp,rev,rem;
        if(x<0)
        
            temp=-long(x);
        else
            temp=x;
        
        rev=0;
        while(temp)
        {
            rem=temp%10;
            rev=(rev*10)+rem;
            temp=temp/10;
        }
        if(rev<INT_MIN || rev>INT_MAX)
        {
            return 0;
        }
        if(x<0)
        {
            return -rev;
        }
        else{
            return rev;
        }
    }
};