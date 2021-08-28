int largest=INT_MIN,secondlargest=INT_MIN;
    if(size<=1)
    {
        return INT_MIN;
        }
    for(int i=0;i<size;i++)
    {
        if(input[i]>largest)
        {
            secondlargest=largest;
            largest=input[i];
        }
        else if(input[i]>secondlargest and largest!=input[i])
        {
            secondlargest=input[i];
        }
    }
    return secondlargest;
}