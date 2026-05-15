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
    bool hasCycle(ListNode* head) {
        if(head==NULL || (head->next == NULL)){
            return false;
        }
        ListNode* s=head;
        ListNode* f=head;
        while(f!=NULL && f->next!=NULL){
            s=s->next;
            f=f->next->next;
            if(s==f) {
                return true;
            }
        }
        return false;
        // we are cmng out of the cycle if fast became null or s==f
        // if(s!=f){
        // return false;
        // }else{
        //     ListNode* p=head;
        //     while(p!=s){
        //         p=p->next;
        //         s=s->next;
            // }
            // return p;
        // }
    }
};
