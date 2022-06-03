/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int cnt1=0,cnt2=0,i,j;
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        for(;temp1;temp1=temp1->next)
            cnt1++;
        temp1=headA;
        for(;temp2;temp2=temp2->next)
            cnt2++;
        temp2=headB;
        if(cnt1<cnt2)
        {
            swap(cnt1,cnt2);
            swap(temp1,temp2);
        }
        for(i=0;i<cnt1-cnt2;i++)
            temp1=temp1->next;
        for(;temp1 && temp1!=temp2;temp1=temp1->next, temp2=temp2->next);
        return temp1;
    }
};