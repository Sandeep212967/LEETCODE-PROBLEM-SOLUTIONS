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
         ListNode* ptr = headA;
        ListNode* cpt = headB;

        while (ptr != cpt) {
            ptr = (ptr == nullptr) ? headB : ptr->next;
            cpt = (cpt == nullptr) ? headA : cpt->next;
        }

        return ptr;
    }
};