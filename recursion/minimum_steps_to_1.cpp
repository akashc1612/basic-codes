#include <bits/stdc++.h>
using namespace std;

int countMinStepsToOne(int n)
{
	//Write your code here
    if(n==1)
    {
        return 0;
    }
    
   int option1=countMinStepsToOne(n-1);
    int least=option1;
    if(n%2==0)
    {
        int option2=countMinStepsToOne(n/2);
        if(option2<least)
        {
            least=option2;
        }
    }
    if(n%3==0)
    {
        int option3=countMinStepsToOne(n/3);
        if(option3<least)
        {
            least=option3;
        }
    }
    return 1+least;
}

int main()
{
	int n;
	cin >> n;
	cout << countMinStepsToOne(n);
}