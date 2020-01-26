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
    ListNode* deleteDuplicates(ListNode* head) {
        //precheck length of linked list
        if(!head) return head;
        ListNode* root=head;
        ListNode* fast=head->next;
        //sorted list, same element must be next to each other
        while(fast)
        {
            if(root->val == fast->val)
            {
                root->next = fast->next;
                fast=fast->next;
            }
            else
            {
                root=root->next;
                fast=fast->next;
            }
        }
        return head;
    }
};