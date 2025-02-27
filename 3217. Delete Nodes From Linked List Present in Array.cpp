// Time Complexity : O(n)
// Space Complexity : O(n)

class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>st(nums.begin(),nums.end());
        while(head!=NULL && st.find(head->val)!=st.end()){
            ListNode* temp=head;
            head=head->next;
            delete(temp);
        }
        ListNode* curr=head;
        while(curr!=NULL && curr->next!=NULL){
            if(st.find(curr->next->val)!=st.end()){
                ListNode* temp=curr->next;
                curr->next=curr->next->next;
                delete(temp);
            }
            else{
                curr=curr->next;
            }
        }
        return head;
    }
};
