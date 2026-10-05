class Solution {
public:
    void reorderList(ListNode* head) {

        if(head == nullptr || head->next == nullptr){
            return;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != nullptr){
            fast = fast->next;

            if(fast != nullptr){
                fast = fast->next;
            }else{
                break;
            }

            if(fast != nullptr){
                slow = slow->next;
            }else{
                break;
            }
        }

        // slow is the middle
        ListNode* middle = slow;

        // Reverse second half
        ListNode* prev = nullptr;
        ListNode* curr = slow->next;

        while(curr != nullptr){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // Disconnect first half from second half
        middle->next = nullptr;

        // prev is now the head of reversed second half
        fast = prev;

        // Merge
        slow = head;

        while(fast != nullptr){

            ListNode* slowtemp = slow->next;
            ListNode* fasttemp = fast->next;

            slow->next = fast;
            fast->next = slowtemp;

            slow = slowtemp;
            fast = fasttemp;
        }
    }
};