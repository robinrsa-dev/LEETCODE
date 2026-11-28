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
    ListNode*findnode(ListNode*head,int x){
        ListNode* curr = head;
        int count = 1;
        while (curr != nullptr ) {
            if(count==x){
                return curr;
            }
            count++;
            curr = curr->next;
            
        }
        return curr;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr || k == 0) {
            return head;
        }
        int length=1;
        ListNode*tail=head;
        while(tail->next!=nullptr){
            length++;
            tail=tail->next;
        }
            if(k%length==0){
                return head;
            }
            k=k%length;
            if(k==0)
                return head;
            tail->next=head;
            ListNode*newlastnode=findnode(head,length-k);
            ListNode*newhead=newlastnode->next;
            newlastnode->next=nullptr;

            return newhead;
          
        }
};