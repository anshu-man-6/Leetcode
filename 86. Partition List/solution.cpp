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
    ListNode* partition(ListNode* head, int x) {
        ListNode* before_head=new ListNode(0);
        ListNode* before=before_head;
        ListNode* after_head=new ListNode(0);
        ListNode* after=after_head;

        while(head!=NULL){
            if(head->val < x){
                ListNode* temp=new ListNode(head->val);
                before->next=temp;
                before=temp;

            }
            else{
                ListNode* temp=new ListNode(head->val);
                after->next=temp;
                after=temp;

            }
            head=head->next;
        }

        before->next=after_head->next;
        return before_head->next;
        
    }
};