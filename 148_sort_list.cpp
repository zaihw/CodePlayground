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
    ListNode* sortList(ListNode* head) {
        return mergeSort(head);
    }
private:
    //function to split linkedlist into two halves
    //recursivily to split and apply helper function
    ListNode* mergeSort(ListNode* head){
        //check exception
        if(head ==NULL || head->next == NULL)   return head;
        
        //fast/slow pointer to find mid point and split linked list
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        //reset head and tail of new linked list
        fast = slow->next;
        slow->next = NULL;
        
        return mergeLists(mergeSort(head), mergeSort(fast));
    }
private:
    //helper function to do comparison and merge
    ListNode* mergeLists(ListNode* p1, ListNode* p2){
        static ListNode dummy(0);
        ListNode* tail=&dummy;
        //two pointer comparison
        while(p1&&p2){
            if(p1->val < p2->val){
                tail->next = p1;
                p1 = p1->next;
            }else{
                tail->next = p2;
                p2 = p2->next;
            }
            tail=tail->next;
        }
        //when comp finished, add uncompared element
        if(p1)  tail->next = p1;
        if(p2)  tail->next = p2;
        return dummy.next;    
    }        
};