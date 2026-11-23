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
        int carry=0;
        ListNode* head= new ListNode(-1,NULL);
        ListNode* dummy=head;
        ListNode* t1=l1;
        ListNode* t2=l2;
        int sum=0;
        while( t1!=NULL || t2!=NULL){
            sum=carry;
            if(t1) sum+=t1->val;
            if(t2) sum+=t2->val;
            int y=sum%10;
            ListNode* newNode=new ListNode(y,NULL);
             carry=sum/10;
            dummy->next=newNode;
            dummy=dummy->next;
           if(t1) t1=t1->next;
           if(t2) t2=t2->next;
        }
        if(carry) {
            ListNode* p=new ListNode(carry);
            dummy->next=p;
        }
        return head->next;
    }
};