/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int i,size;
        ListNode* temp=head;
        if(!temp->next && n==1)
            return NULL;
        for(size=0;temp;size++, temp=temp->next);
        if(n==size)
            return head->next;        
        temp=head;
        for(i=0;i<size-n-1 && temp->next;i++, temp=temp->next);
        //cout<<i<<"\n";
        if(!temp->next && i!=size-n-1)
        {
            //cout<<"I\n";
            temp->next=temp->next->next;
        }            
        else if(i==size-n-1 && !temp->next)
        {
            //cout<<"I2\n";
            temp=head;
            for(i=0;i<n-1 && temp->next;i++, temp=temp->next);
            temp->next=NULL;
        }            
        else if(temp->next)
            temp->next=temp->next->next;
        return head;          
    }
};