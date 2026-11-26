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
    bool hasCycle(ListNode *head) {
        if(head== NULL || head->next==NULL) return false;

        ListNode* temp=head;
       int cnt=0;
       map<ListNode*,int>mpp;
       while(temp->next!=NULL){
        if(mpp[temp]==2) return true;
        mpp[temp]++;
        temp=temp->next;
    
       }
        return false;
    }
};