class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1 = l1;
        ListNode* t2 = l2;
        ListNode* dummyListnode = new ListNode(-1);
        ListNode* curr = dummyListnode;
        int carry = 0;

        while (t1 != nullptr || t2 != nullptr) {
            int sum = carry;
            if (t1) {
                sum += t1->val;
                t1 = t1->next;
            }
            if (t2) {
                sum += t2->val;
                t2 = t2->next;
            }

            curr->next = new ListNode(sum % 10);
            curr = curr->next;
            carry = sum / 10;
        }

        if (carry > 0) {
            curr->next = new ListNode(carry);
        }

        ListNode* result = dummyListnode->next;
        delete dummyListnode;
        return result;
    }
};