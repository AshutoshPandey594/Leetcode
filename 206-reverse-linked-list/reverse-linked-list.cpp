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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp=head;
        if(head ==NULL) return head;
        
         vector<ListNode*> ans;
        while(temp!=NULL){
            ans.push_back(temp);
            temp=temp->next;
            
        }
        head=ans[ans.size()-1];
        temp=head;
        for(int i=ans.size()-2;i>=0;i--){
             temp->next=ans[i];
             temp=ans[i];
        }
        temp->next=NULL;
        return head;

    }
};