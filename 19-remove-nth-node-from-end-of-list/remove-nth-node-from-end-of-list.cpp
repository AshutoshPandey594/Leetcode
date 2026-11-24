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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt=0;
      ListNode* temp=head;
      while(temp !=NULL){
        cnt++;
        temp=temp->next;
      }
      if(n==cnt){
        ListNode* p= head;
        head=head->next;
        delete(p);
        return head;
      }
      int z=cnt-n+1;
      int cnt1=0;
      temp=head;
      ListNode* p;
      while(temp!=NULL){
        cnt1++;
        if(cnt1==z){
            p->next=temp->next;
            delete(temp);
            break;
        }
         p=temp;
        temp=temp->next;
      }
      return head;
    }
};