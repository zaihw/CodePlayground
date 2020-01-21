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
        //fake node in front of original head
        ListNode fake(0);
        fake.next=head;
        head=&fake;
        //tail points new head (head of fake)
        ListNode *tail=head;
        bool dup=false;
        //end condition p->next = NULL
        for(ListNode *p=head->next; p && p->next; p=p->next){
            if (dup==false && p->val==p->next->val){
                dup=true;
                continue;
            }
            //replace pointer
            if (dup==true && p->val != p->next->val){
                dup=false;
                tail->next=p->next;
                continue;
            }
            if (dup==false){
                tail=p;
            }
        }
        if (dup==true){
            tail->next=NULL;
        }
        return head->next;
        
    }
};