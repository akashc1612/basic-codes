#include <iostream>
using namespace std;
class Node{
  public:
  int data;
  Node * next;
  Node(int data)
  {
      this->data=data;
      this->next=NULL;
  }
};
Node * inputnodes()
{
    int data;
    cin>>data;
    Node * head=NULL;
    Node * tail=NULL;
    while(data!=-1)
    {
        Node *newnode=new Node(data);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
         tail->next=newnode;
         tail=tail->next;
        }
        cin>>data;
    }
    return head;
}
void print(Node *head)
{
    while(head!=0)
    {
        cout<<head->data<<' ';
        head=head->next;
    }
}
int main()
{
    Node *head=inputnodes();
    print(head);

    return 0;
}
