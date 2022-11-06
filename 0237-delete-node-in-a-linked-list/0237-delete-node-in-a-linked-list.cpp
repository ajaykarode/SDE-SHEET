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
    void deleteNode(ListNode* node) {
        // *node = *node->next;    //or
        // auto next = node->next;
        // *node = *next;
        // delete(next); //or
        node->val = node->next->val;
        node->next = node->next->next;
        
    }
};