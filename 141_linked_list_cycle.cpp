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
    bool hasCycle(ListNode *head) {
        //pre-check, when size of linked list <2 return false
        if (head==NULL || head->next == NULL)   return false;
        //fast and slow pointer
        //end condition: fast pointes to NULL, fast->next points to NULL, found loop
        ListNode* fast=head;
        ListNode* slow=head;
        do{
            slow=slow->next;
            fast=fast->next->next;
        }while(fast != NULL && fast->next != NULL && fast != slow);
        return fast==slow ? true : false;
    }
};