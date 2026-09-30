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
    void reorderList(ListNode* head) {
        vector<int> slowstack{};
        vector<int> faststack{};

        if(head==nullptr){
            return;
        };

        ListNode* slow=head;
        ListNode* fast=head;

        slowstack.push_back(slow->val);

        while(fast!=nullptr){
            fast=fast->next;
            if(fast!=nullptr){
                fast=fast->next;
            }else{
                break;
            };
            if(fast!=nullptr){
                slow=slow->next;
            }else{
                break;
            };
            slowstack.push_back(slow->val);
        };

        while(slow!=nullptr && fast==nullptr){
            slow=slow->next;
            if(slow!=nullptr){faststack.push_back(slow->val);};
        };

        slow = head;

int counter = 0;

while (slow != nullptr) {

    // Take from slowstack
    if (counter < slowstack.size()) {
        slow->val = slowstack[counter++];
        slow = slow->next;
    }

    // Take from faststack from the back
    if (slow != nullptr && !faststack.empty()) {
        slow->val = faststack.back();
        faststack.pop_back();
        slow = slow->next;
    }
}

        

        
    }
};
