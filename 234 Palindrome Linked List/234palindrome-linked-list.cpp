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
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL&&fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        slow->next=reverse(slow->next);
       
        slow=slow->next;
        while(slow!=NULL){
            if(head->val!=slow->val){
                return 0;
            }
            head=head->next;
            slow=slow->next;
        }
        return 1;
    }
     ListNode* reverse(ListNode *head){
        ListNode* temp=NULL;
        ListNode* temp2=NULL;
        while(head!=NULL){
            temp2=head->next;
            head->next=temp;
            temp=head;
            head=temp2;
        }
        return temp;
    }
};