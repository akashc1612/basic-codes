#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

bool isPalindrome(Node *head){
    if(head==NULL or head->next==NULL)
    {
        return true;
    }
Node*temp=head;
    int arr[100000000];
    int i=0;
    while(temp!=NULL)
    {
        arr[i++]=temp->data;
        temp=temp->next;
    }
    int  n=i-1;
    for(int j=0;j<n;j++)
    {
        if(arr[j]==arr[n])
        {
            n--;
            continue;
        }
        return false;
    }
    return true;
}

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		bool ans = isPalindrome(head);

		if (ans) cout << "true";
		else cout << "false";

		cout << endl;
	}

	return 0;
}