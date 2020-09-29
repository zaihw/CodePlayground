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
        // use val in next node to override val in current node
        // delete next node
        ListNode* next_node;
        next_node = node->next;
        node->val = next_node->val;
        node->next = next_node->next;
        delete next_node;
    }
};