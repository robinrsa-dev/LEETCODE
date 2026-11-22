class Solution {
public:
    int length(ListNode* head) {
        ListNode* temp = head;
        int count = 0;
        while (temp != nullptr) {
            temp = temp->next;
            count++;
        }
        return count;
    }

    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
          
            return nullptr;
        }

        int mid = length(head) / 2;
        ListNode* prev = nullptr;
        ListNode* temp = head;

        for (int i = 0; i < mid; i++) {
            prev = temp;
            temp = temp->next;
        }

        prev->next = temp->next;
        delete(temp);
      
        return head;
    }
};