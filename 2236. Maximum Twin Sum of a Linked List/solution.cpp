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
    int pairSum(ListNode* head) {
        vector<int>vec;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* temp=slow;

        while(slow!=NULL){
            vec.push_back(slow->val);
            slow=slow->next;

        }
        
        slow=head;
        int ans=INT_MIN;
        while(slow!=temp){
            int sum=vec.back();
            vec.pop_back();
            sum+=slow->val;
            ans=max(ans,sum);
            slow=slow->next;

        }

           return ans;
    }
};