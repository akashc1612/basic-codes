int sum(int input[], int n) {
if(n==0)
{
    return NULL;
}
if(n==1)
{
    return input[0];
}
    int smallsum=sum(input+1,n-1);
    return smallsum+input[0];
}