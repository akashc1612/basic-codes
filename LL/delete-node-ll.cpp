
Node *deleteNode(Node *head, int pos)
{
    // Write your code here.
    Node *temp=head;
    if(head==NULL)
    {
        return head;
    }
    if(pos==0)
    {
        Node *a=temp;
        temp=temp->next;
        delete a;
        return temp;
    }
    else{
        int count=0;
        while(temp!=NULL and count<pos-1)
        {
            temp=temp->next;
            count++;
        }
        
        if(temp!=NULL and temp->next!=NULL)
        {
            Node*a=temp;
        temp=temp->next;
        a->next=temp->next;
        delete temp;
        }
        return head;
    }
}
