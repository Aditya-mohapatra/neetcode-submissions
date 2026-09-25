/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        unordered_map<ListNode*,int > kmap;

        ListNode* temp=headA;

        while(temp!=nullptr){
            kmap[temp]++;
            temp=temp->next;
        };

        temp=headB;

        while(temp!=nullptr){
            kmap[temp]--;
            
            if(kmap[temp]==0){
                return temp;
            }else{
                temp=temp->next;
            }
        };

        return nullptr;



        
    }
};