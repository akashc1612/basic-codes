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
Node *evenAfterOdd(Node *head)
{
    if(head==NULL or head->next==NULL)
    {
        return head;
    }
    Node * temp=head;
    Node*ohead=NULL;
    Node *ehead=NULL;
    Node *otail=NULL;
    Node *etail=NULL;
    while(temp!=NULL)
    {
        if(temp->data%2==0)
        {
            if(ehead==NULL)
            {
                ehead=temp;
                etail=temp;
                temp=temp->next;
            }
            else{
                etail->next=temp;
                etail=etail->next;
                temp=temp->next;
            }
        }
            else if(temp->data%2!=0)
            {
                if(ohead==NULL){
                ohead=temp;
                otail=temp;
                temp=temp->next;
                }
                 else{
                otail->next=temp;
                otail=otail->next;
                temp=temp->next;
            }
            }
        }
           if(ohead!=NULL and ehead!=NULL)
           {
               otail->next=ehead;
               etail->next=NULL;
               return ohead;
           }
    else if(ohead!=NULL and ehead==NULL)
    {
        otail->next=NULL;
        return ohead;
    }
    else if(ohead==NULL and ehead!=NULL)
    {
        etail->next==NULL;
        return ehead;
    }
    }
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		head = evenAfterOdd(head);
		print(head);
	}
	return 0;
}