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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int i;
        ListNode* tLeft;
        ListNode* tRight;
        // An loop to reach left
        for (i = 1, tLeft = head; i < left; i++, tLeft = tLeft -> next);
        // Loop for swapping values
        for (; left < right; left++, right--, tLeft = tLeft -> next) {
            // An loop to reach right
            for (i = 1, tRight = head; i < right; i++, tRight = tRight -> next);
            // Swap operation
            swap(tLeft -> val, tRight -> val);
        }
        return head;
    }
};