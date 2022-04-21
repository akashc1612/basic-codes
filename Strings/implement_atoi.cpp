int atoi(string str) {
    // Write your code here.
	int num=0;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]>='0' and str[i]<='9')
		{
			num=num+str[i]-'0';
			num=num*10;	
		}
		}
	if(str[0]=='-')
	{
		return -(num/10);
	}
	return num/10;
}