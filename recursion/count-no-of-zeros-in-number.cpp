int countZeros(int n) {
if(n<=9 and n==0)
{
    return 1;
}
    else if(n<=9 and n!=0)
{
    return 0;
}
    
    int lastno=n%10;
    int smallans=countZeros(n/10);
    if(lastno==0)
    {
        return smallans+1;
    }
    else{
        return smallans;
    }
}