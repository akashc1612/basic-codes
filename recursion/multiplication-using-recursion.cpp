int multiplyNumbers(int m, int n) {
   
    if(m==0 || n==0)
    {
        return 0;
    }
    if(m==1)
    {
        return n;
    }
     if(n==1)
    {
        return m;
    }
    int smalloutput=multiplyNumbers(m-1,n);
    return smalloutput+n;
}