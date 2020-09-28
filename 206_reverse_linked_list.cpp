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
    ListNode* reverseList(ListNode* head) {
        ListNode* pre = NULL;
        ListNode* after = NULL;
        //iteratively solution
        while(head){
            after = head->next; //store head->next as head of old linked list after update
            head->next = pre;   //take head from old linked list and add to new linked list
            pre = head; //move pre
            head = after;   //move head
        }
        return pre;
    }
};