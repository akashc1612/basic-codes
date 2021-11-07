Node *midPoint(Node *head)
{
    // Write your code here
    int count=0;
    Node * temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    int mid=(count-1)/2;             //FOR FINDING THE FIRST MIDPOINT OF LL WE DO (count-1) outherwise use count;
    count=0;
    while(count!=mid)
    {
        count++;
        head=head->next;
    }
    return head;
    
}