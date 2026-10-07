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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum=0;
        int unit=0;
        int carry=0;

        ListNode* list1=l1;
        ListNode* list2=l2;
        ListNode* templist=nullptr;
        ListNode* endptr1=l1;
        ListNode* endptr2=l2;



        while(list1!=nullptr && list2!=nullptr){
            sum=carry+(list1->val)+(list2->val);
            unit=sum%10;
            carry=(sum-unit)/10;

            list1->val=unit;
            list2->val=unit;
            if(list1->next!=nullptr){
                endptr1=endptr1->next;
            };
            if(list2->next!=nullptr){
                endptr2=endptr2->next;
            };
            list1=list1->next;
            list2=list2->next;
        }
        if(list1==nullptr && list2!=nullptr ){
            templist=list2; 
        }else if(list2==nullptr && list1!=nullptr){
            templist=list1;
            endptr1=endptr2;           

        }else{
            templist= nullptr;
        };
        

        while(templist!=nullptr){
            sum=carry+(templist->val);
            unit=sum%10;
            carry=(sum-unit)/10;

            ListNode *end=new ListNode(unit);
            endptr1->next=end; 
            endptr1=endptr1->next;
            templist=templist->next;           
        };
        if(carry!=0){
            ListNode *end=new ListNode(carry);
            endptr1->next=end;
        };
        if(list2==nullptr && list1!=nullptr){
            return l2;
        }else{
            return l1; 

        }






        
    }
};
