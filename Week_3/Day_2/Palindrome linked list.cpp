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
    bool isPalindrome(ListNode* head) {

        if(!head || !(head->next))
             return 1;

        ListNode *s=head;
        ListNode *f=head;

        while(f->next && f->next->next){
            s=s->next;
            f=f->next->next;
        }

        ListNode *p=NULL,*q=s->next,*r;
        while(q){
            r=q->next;
            q->next=p;
            p=q;
            q=r;
        }

        s->next=p;
        s=s->next;

        ListNode *res = head;
        while(s){
            if(s->val==res->val){
                s=s->next;
                res=res->next;
            }
            else
                return 0;
        }
        return 1;
    }
};
