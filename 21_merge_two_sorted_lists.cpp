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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *l = NULL;   //header of the linked list
        ListNode **p = &l;
        
        while   (l1 != NULL && l2 != NULL){
            if (l1->val < l2->val){
                *p=l1;
                l1=l1->next;
            } else {
                *p=l2;
                l2=l2->next;
            }
            p=&(*p)->next;
        }
        
        *p = (l1 != NULL ? l1 : l2);
        
        return l;
    }
};