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
    ListNode* removeElements(ListNode* head, int val) {
 if (head == NULL) {
    return NULL;
}

while (head != NULL && head->val == val) {
    ListNode* Delete = head;
    head = head->next;
    delete Delete;
}

if (head == NULL) {
    return NULL;
}

ListNode* temp = head;
ListNode* prev = NULL;

while (temp != NULL) {
    if (temp->val == val) {
        ListNode* Delete = temp;
        temp=temp->next;  
        prev->next =prev->next->next;        
        delete Delete;
    } else {
        prev = temp;
        temp = temp->next;
    }
}

return head;
        
    }
};