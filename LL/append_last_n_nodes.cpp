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

Node *appendLastNToFirst(Node *head, int n)
{
   Node *temp=head;
    int count=0;
    if(head==NULL or n==0)
    {
        return head;
    }
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    temp=head;
    int count2=count-n;
    int i=0;
    while(temp!=NULL and i!=count2-1)
    {
        i++;
        temp=temp->next;
    }
    Node *a=temp->next;
    Node *b=a;
    temp->next=NULL;
    while(a->next!=NULL)
    {
        a=a->next;
    }
    a->next=head;
    head=b;
    return head;
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

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int n;
		cin >> n;
		head = appendLastNToFirst(head, n);
		print(head);
	}
	return 0;
}