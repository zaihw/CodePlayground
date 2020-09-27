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
        //cmp first node
        if (headA == NULL || headB ==NULL) return NULL;
        
        // find length of linked lists
        ListNode* tailA = headA;
        ListNode* tailB = headB;
        int lenA=0, lenB=0;
        while(tailA->next != NULL){
            tailA = tailA->next;
            lenA++;
        }
        while(tailB->next != NULL){
            tailB = tailB->next;
            lenB++;
        }
        
        //cmp last node, check if intersection exists
        if(tailA != tailB)  return NULL;
        
        //have intersection, start find intersection
        //find len diff, the move ptr to start from same relative pos (to tail)
        if (lenA >lenB){
            int diff = lenA - lenB;
            while(diff>0){
                headA = headA->next;
                diff--;
            }
        }else{
            int diff = lenB - lenA;
            while(diff>0){
                headB = headB->next;
                diff--;
            }
        }
        
        // loop to find intersection
        // since last node is the same
        // so this is not an infinity loop
        while(headA != headB){
            headA = headA->next;
            headB = headB->next;
        }
        
        return headA;
    }
};