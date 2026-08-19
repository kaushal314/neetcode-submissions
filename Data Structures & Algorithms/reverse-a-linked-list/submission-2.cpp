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
        ListNode*p=nullptr;
        ListNode* c=head;
        ListNode* ne;
        while(c!=nullptr){
            ne=c->next;
            c->next=p;
            p=c;
            c=ne;
        }
        head=p;
        return head;
    }
};
