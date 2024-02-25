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
    ListNode* sortList(ListNode* head) {
        ListNode* curr=head;
        vector<int> arr;
        while(curr!=NULL){
            arr.push_back(curr->val);
            curr=curr->next;
        }
        sort(arr.begin(),arr.end());
        int i=0;
        ListNode* curr2=head;
        while(curr2!=NULL){
            curr2->val=arr[i];
                i++;
            curr2=curr2->next;
        }
        return head;
    }
};