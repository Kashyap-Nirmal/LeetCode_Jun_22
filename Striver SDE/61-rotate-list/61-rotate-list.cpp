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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)
            return NULL;
        ListNode* temp=head;        
        int tVal=head->val,tVal2=head->val,size_=0;        
        for(size_=0;temp;temp=temp->next,size_++);
        cout<<size_<<"\n";
        for(k=k%size_;k>0;k--)
        {
            temp=head;                
            tVal=temp->val;
            for(;temp->next && temp->next->next;temp=temp->next)
            {
                tVal2=temp->next->val;
                temp->next->val=tVal;
                tVal=tVal2;
                //cout<<temp->val<<" "<<tVal<<" "<<temp->next->val<<"\n";
            }   
            if(temp->next)
            {
                tVal2=temp->next->val;
                temp->next->val=tVal;    
            }            
            head->val=tVal2; 
            //cout<<"\n";
        }            
        return head;                
    }
};