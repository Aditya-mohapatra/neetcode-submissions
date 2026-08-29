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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* solution;
        ListNode* temp=nullptr;

        ListNode* comp1=list1;
        ListNode* comp2=list2;

        if(list1==nullptr){
            return list2;
        };

        if(list2==nullptr){
            return list1;
        };

        if((comp1->val) <=(comp2->val)){
                solution=new ListNode(comp1->val);
                temp=solution;
                comp1=comp1->next;
            }else{
                solution=new ListNode(comp2->val);
                temp=solution;
                comp2=comp2->next;
            };   

        while((comp1 != nullptr && comp2 != nullptr)){
            if((comp1->val) <=(comp2->val)){
                temp->next=new ListNode(comp1->val);
                temp = temp->next;
                comp1=comp1->next;
            }else{
                temp->next=new ListNode(comp2->val);
                temp = temp->next;
                comp2=comp2->next;
            };           
        }
         if(comp1==nullptr){
            while(comp2!=nullptr){
                temp->next=new ListNode(comp2->val);
                temp = temp->next;
                comp2=comp2->next;
            }
        };

        if(comp2==nullptr){
            while(comp1!=nullptr){
                temp->next=new ListNode(comp1->val);
                temp = temp->next;
                comp1=comp1->next;
            }
        };

        return solution;


        
    }
};
