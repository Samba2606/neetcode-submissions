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
        ListNode* current=head;
        ListNode* prev=NULL;
        ListNode* current1=head;

        int len=0;
        while(current1!=NULL){
            len=len+1;
            current1=current1->next;
        }

        int travel=len-n;
        int count=0;
        if(travel==0) head=head->next;
        else{
            while(travel!=0){
                prev=current;
                current=current->next;
                travel--;
            }
            if(travel==0){
                prev->next=current->next;
            }
        }
        return head;
    }
};
