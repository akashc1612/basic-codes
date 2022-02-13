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

Node *bubbleSort(Node *head)
{
	// Write your code here
    if (head==NULL or head->next==NULL)
    {
        return head;
    }
    
    int count =0;
    Node*temp=head;
    while(temp!=NULL)
    {
        count=count+1;
        temp=temp->next;
    }
    for(int i=0;i<count;i++)
    {
    Node*prev=head;
    Node*nxt=head->next;
    while(nxt!=NULL)
    {
        if(prev->data>nxt->data)
        {
            int temp=prev->data;
            prev->data=nxt->data;
            nxt->data=temp;
            prev=nxt;
            nxt=nxt->next;
            continue;
        }
         prev=nxt;
         nxt=nxt->next;
    }
    }
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
	Node *head = takeinput();
	head = bubbleSort(head);
	print(head);
}