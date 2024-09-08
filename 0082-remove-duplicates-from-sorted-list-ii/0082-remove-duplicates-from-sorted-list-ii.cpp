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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head, *prev = head;
        int prev_val = -101;
        while (temp != NULL) {
            if (temp -> val == prev_val && temp == head) {
                // Head is also a previously repeating value. Change head.
                head = temp -> next;
                temp = head;
                prev = head;
            } else if (temp -> val == prev_val) {
                // Temp -> val is a Previously repeating value. So assign prev -> next = temp -> next
                prev -> next = temp -> next;
                // prev_val = prev_val;
                temp = prev;
            } else if (temp != head && temp -> next != NULL && temp -> val == temp -> next -> val) {
                // Value are same. Assign prev -> next = temp -> next -> next. Save prev_val
                prev_val = temp -> val;
                prev -> next = temp -> next -> next;                            
                temp = prev;
            } else if (temp == head && temp -> next != NULL && temp -> val == temp -> next -> val) {
                // Value are same at head. Assign head = temp -> next -> next. Save prev_val
                prev_val = temp -> val;
                head = temp -> next -> next;
                temp = head;
                prev = head;                
            } else {
                prev = temp;
                temp = temp -> next;
            }
        }
        return head;
    }
};