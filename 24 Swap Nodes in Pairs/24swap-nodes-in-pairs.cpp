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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* point=dummy;
        while(point->next!=NULL&&point->next->next!=NULL){
            ListNode* s1=point->next;
            ListNode* s2=point->next->next;

            s1->next=s2->next;
            s2->next=s1;
            point->next=s2;
            point=s1;
        }
        return dummy->next;
    }
};