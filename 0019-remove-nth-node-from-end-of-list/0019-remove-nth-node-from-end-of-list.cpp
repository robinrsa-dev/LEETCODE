class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* temp = head;

        while (temp != nullptr) {
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;  
            temp = front;
        }

        return prev;
    }

    ListNode* removeNthFromEnd(ListNode* head, int k) {
        if (head == nullptr || k <= 0) {
            return head;
        }

        head = reverse(head);

        if (k == 1) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return reverse(head);
        }

        ListNode* temp = head;
        ListNode* prevNode = nullptr;
        int count = 0;

        while (temp != nullptr) {
            count++;
            if (count == k) {
                prevNode->next = temp->next;
                delete temp;
                break;
            }
            prevNode = temp;
            temp = temp->next;
        }

        return reverse(head);
    }
};