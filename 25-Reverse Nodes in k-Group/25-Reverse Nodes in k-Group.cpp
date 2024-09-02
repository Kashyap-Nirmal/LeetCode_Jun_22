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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (k == 1) return head;
        ListNode* temp = head;
        int arr[5000] = {}, i = 0, j, z, swap, p1, p2;

        for (temp = head, i = 0; temp; temp = temp-> next, i++) arr[i] = temp->val;

        for(j = 0; j < i ; j++) {
            p1 = k * j;
            p2 = (j + 1) * k - 1;

            if (p2 >= i) break;
            
            for (z = 0; z < k / 2 && p1 < p2; z++, p1++, p2--) {
                swap = arr[p1];
                arr[p1] = arr[p2];
                arr[p2] = swap;
            }
        }

        for (temp = head, j = 0; temp; temp = temp-> next, j++) temp->val = arr[j];
        
        return head;
    }
};