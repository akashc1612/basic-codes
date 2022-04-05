#include <iostream>
using namespace std;

long staircase(int n)
{
	//Write your code here
    if(n==0)
    {
        return 1;
    }
    if(n<0)
    {
        return 0;
    }
    int ans1=staircase(n-1);
    int ans2=staircase(n-2);
    int ans3=staircase(n-3);
    return ans1+ans2+ans3;
}

int main()
{
	int n;
	cin >> n;
	cout << staircase(n);
}