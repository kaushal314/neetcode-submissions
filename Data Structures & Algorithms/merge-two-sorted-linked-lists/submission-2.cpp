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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode d(0);
        ListNode* n=&d;
        while(l1 && l2){
        if(l1->val<l2->val){
            n->next=l1;
            l1=l1->next;
        }
        else{
            n->next=l2;
            l2=l2->next;
        }
        n=n->next;
        }
        if(l1)n->next=l1;
        else n->next=l2;
        return d.next; 
    }
};
