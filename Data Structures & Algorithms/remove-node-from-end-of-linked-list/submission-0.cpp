class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Step 1: Count the number of nodes
        ListNode* s = head;
        int c = 0;
        while (s != nullptr) {
            s = s->next;
            c++;
        }

        if (n == c) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        int i = 1;
        ListNode* a = head;
        while (i < c - n) {
            a = a->next;
            i++;
        }
        ListNode* t = a->next;
        a->next = a->next->next;
        delete t;

        return head;
    }
};
