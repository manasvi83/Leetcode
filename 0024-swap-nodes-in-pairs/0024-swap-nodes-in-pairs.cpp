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
    ListNode* swapPairs(ListNode* head) {
       if(head==NULL || head->next==NULL) return head;
        ListNode *first=head,*second=head->next,*third=second->next;
        head=second;
        int flag=0;
        while(third!=NULL)
        {
            second->next=first;
            first->next=third->next;
            second=first->next;
            
            if(second!=NULL)
            {
                first=third;
                third=second->next;
            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            second->next=first;
            first->next=third;
        }
        else
        {
            first->next=third;
        }
        return head; 
    }
};