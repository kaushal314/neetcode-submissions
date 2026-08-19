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
    void reorderList(ListNode* head) {
        ListNode* s=head;
        ListNode* f=head;
        while(f!=nullptr && f->next!=nullptr){
            s=s->next;
            f=(f->next)->next;
        }
        ListNode* se=s->next;
        s->next=nullptr;
        ListNode* pr=nullptr;
        while(se){
            ListNode* t=se->next;
            se->next=pr;
            pr=se;
            se=t;
        }
        ListNode* fi=head;
        se=pr;
        while(se){
            ListNode* t1=fi->next;
            ListNode* t2=se->next;
            fi->next=se;
            se->next=t1;
            fi=t1;
            se=t2;
        }
    }
};
