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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2!=NULL)
            return list2;        
        else if(list2==NULL)
            return list1;
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;        
        for(;temp1->next;temp1=temp1->next);
        for(;temp2->next;temp2=temp2->next);
        if(list2->val>temp1->val)
        {
            temp1->next=list2;
            return list1;
        }            
        else if(list1->val>temp2->val)
        {
            temp2->next=list1;
            list1=list2;
            return list1;
        }            
        ListNode* temp=temp1;
        ListNode* tN;
        int i; 
        temp1=list1;
        temp2=list2;
        for(i=0;temp1!=NULL && temp2!=NULL;i++)
        {
            temp=temp1;
            if(temp1->val>temp2->val && temp1!=temp)
            {
                //cout<<"I "<<i<<" "<<temp1->val<<" "<<temp2->val<<"\n";
                tN=new ListNode(temp2->val,temp->next);
                temp->next=tN;
                temp2=temp2->next;
            }
            else if(temp1->val>temp2->val && temp1==temp)
            {
                //cout<<"EI "<<i<<" "<<temp1->val<<" "<<temp2->val<<"\n";
                tN=new ListNode(temp1->val,temp1->next);            
                temp1->val=temp2->val;
                temp1->next=tN;
                temp1=temp1->next;
                temp2=temp2->next;
            }
            else if(temp1->val<temp2->val)
            {
                //cout<<"EI1 "<<i<<" "<<temp1->val<<" "<<temp2->val<<"\n";               
                //tN=new ListNode(temp2->val,temp1->next);
                //temp1->next=tN;                                                
                temp1=temp1->next;
                //temp2=temp2->next;
            }
            else if(temp1->val==temp2->val)
            {
                //cout<<"EI2 "<<i<<" "<<temp1->val<<" "<<temp2->val<<"\n";
                tN=new ListNode(temp1->val,temp1->next);
                temp1->next=tN;                                
                temp1=temp1->next->next;
                temp2=temp2->next;
            }
            temp=temp1;            
        }
        if(temp1==NULL && temp2!=NULL)
        {
            temp1=list1;
            for(;temp1->next;temp1=temp1->next);    
            temp1->next=temp2;
        }               
        //cout<<i<<" "<<temp1<<" "<<temp2<<" "<<"\n";
        return list1;
    }
};