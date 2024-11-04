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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head -> next;
        ListNode* at = new ListNode(0);
        ListNode* ans = at;
        int sum = 0;
        while(temp != NULL) {
            if (temp -> val == 0) {
                at -> val = sum;
                sum = 0;
                at -> next = temp -> next; 
                at = at -> next;
            } 
            sum += temp -> val;
            temp = temp -> next;
        }
        return ans;
    }
};