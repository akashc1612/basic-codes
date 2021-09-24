int sumOfDigits(int n) {
 if(n<=9)
    {
        return n;
    }
    int lastdigit=n%10;
    int smallsum=sumOfDigits(n/10);
    return smallsum+lastdigit;
}
    