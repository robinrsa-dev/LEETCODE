class Solution {
public:
    int length(ListNode* head) {
        int count = 0;
        ListNode* temp = head;

        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return nullptr;

        int mid = length(head) / 2;

        ListNode* prev = nullptr;
        ListNode* temp = head;

        for (int i = 0; i < mid; i++) {
            prev = temp;
            temp = temp->next;
        }

        prev->next = temp->next;
        return head;
    }
};