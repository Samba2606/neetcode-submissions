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
    ListNode* reverse(ListNode* head){
         ListNode* prev=NULL;
         ListNode* curr=head;
         ListNode* next=NULL;
         while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
         }
         return prev;
    }
    void reorderList(ListNode* head) {
         ListNode* slow=head;
         ListNode* fast=head->next;
         while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
         }
          ListNode* second=reverse(slow->next);
          slow->next=NULL;
          ListNode* first=head;

          while(second!=NULL){
             ListNode* temp1=first->next;
             first->next=second;
             ListNode* temp2=second->next;
             second->next=temp1;
             first=temp1;
             second=temp2;
          }
    }
};
