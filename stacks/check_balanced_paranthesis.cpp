#include <iostream>
#include <string>
#include<stack>
using namespace std;

bool isBalanced(string expression) 
{
    // Write your code here
    stack<char>s1;
    for(int i=0;expression[i]!='\0';i++)
    {
        if(expression[i]=='(')
        {
            s1.push('(');
        }
        else if(expression[i]==')')
        {
            if(s1.empty())
            {
                return false;
            }
            else{
                s1.pop();
            }
        }
    }
    return s1.empty();
}
int main() 
{
    string input;
    cin >> input;
    cout << ((isBalanced(input)) ? "true" : "false");
}