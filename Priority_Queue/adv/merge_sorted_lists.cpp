typedef pair<int, ListNode*> pr;
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(!lists.size())
        {
            return NULL;
        }
        priority_queue<pr,vector<pr>,greater<pr>>minh;
        for(int i=0;i<lists.size();i++)
        {
             ListNode*temp=lists[i];
            while(temp!=NULL)
            {
                minh.push({temp->val,temp});
                temp=temp->next;
            }
        }
        if(!minh.size())
        {
            return NULL;
        }
        
        ListNode*head=NULL;
        ListNode*tail=NULL;
        while(minh.size())
        {
            if(head==NULL){
             head=minh.top().second;
             tail=minh.top().second;
                minh.pop();
                continue;
            }
            tail=tail->next=minh.top().second;
            minh.pop();
        }
        tail->next=NULL;
        return head;
    }
};