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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* c=head;
        int g=0;
        while(c!=nullptr && g<k){
            c=c->next;
            g++;
        }
        if(g==k){
            c=reverseKGroup(c,k);
            while(g-- >0){
                ListNode* t=head->next;
                head->next=c;
                c=head;
                head=t;
            }
            head=c;
        }
        return head;
    }
};
