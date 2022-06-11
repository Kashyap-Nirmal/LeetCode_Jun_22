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
    ListNode *detectCycle(ListNode *head) {
        int i=0;
        ListNode* temp =head;
        for(i=0;temp;temp=temp->next, i++)
        {
            if(temp->val<100001)
                temp->val=100001+i;
            else if(temp->val>100000)
                break;
        }
        return temp;
    }
};