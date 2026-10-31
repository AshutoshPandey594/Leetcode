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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        while(temp!=NULL){
        
            ListNode* ans=temp->next;
            while( ans!=NULL && ans->val==temp->val){
                ans=ans->next;
            }
            temp->next=ans;
            temp=ans;
        }
        return head;
    }
};