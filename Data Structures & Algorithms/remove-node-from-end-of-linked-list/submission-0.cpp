class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* slow = head;
        int size = 0;

        // Find size
        while(slow != nullptr){
            size++;
            slow = slow->next;
        }

        if(size < n){
            return head;
        }

        // If removing the head
        if(n == size){
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        int nth = size - n;

        slow = head;
        int i = 0;

        // Move to node BEFORE the one we want to delete
        while(i < nth - 1){
            slow = slow->next;
            i++;
        }

        ListNode* curr = slow;
        ListNode* future = slow->next;

        curr->next = future->next;
        delete future;

        return head;
    }
};