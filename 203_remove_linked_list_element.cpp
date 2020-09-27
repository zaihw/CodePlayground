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
    ListNode* removeElements(ListNode* head, int val) {
        // add a dummy node before 1st node
        static ListNode* dummyHead = new ListNode(-1);
        dummyHead->next = head;
        ListNode* prob = dummyHead;
        // loop from 1st node in dummyHead
        // prob: node before node to be checked
        // node_check: node to check val
        while(prob->next != NULL){
            ListNode* node_check = prob->next;
            if(node_check->val == val){
                prob->next=node_check->next;
                // garbage collection
                delete node_check;
            }else{
                prob = prob->next;
            }
        }
        return dummyHead->next;
    }
};