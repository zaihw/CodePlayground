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
    //helper function1 to find mid point
    ListNode* findMid(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    
    //helper function2 to reverse linked list
    ListNode* reverseLinkedList(ListNode* head){
        if (head==NULL)   return NULL;  
        ListNode* Prev = NULL;  
        while(head){
            ListNode* next = head->next;  //store accessor to next node
            head->next = Prev;  //disconnect curr and next, reverse
            Prev = head;    //move prev to curr
            head = next;    //move curr to next
        }
        return Prev;
    }
    
    bool isPalindrome(ListNode* head) {
        // split into two halves
        // reverse the 2nd part
        // compare 1 by 1
        ListNode* midNode = findMid(head); 
        ListNode* head2 = reverseLinkedList(midNode);
        while(head2!=NULL){
            if (head->val != head2->val){
                return false;
            }
            head = head->next;
            head2 = head2->next;
        }
        return true;
    }
};