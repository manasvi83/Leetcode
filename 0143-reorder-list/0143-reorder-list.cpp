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
    void reorderList(ListNode* head) {
          
        if (!head) return;
        
        
        ListNode *slow = head, *fast = head, *prev = NULL;
        while (fast->next && fast->next->next) {
            fast = fast->next->next;
            slow = slow->next;
        }
        
       
        if (fast->next) slow = slow->next;
        
        
        while (slow) {
            fast = slow->next;
            slow->next = prev;
            prev = slow;
            slow = fast;
        }
        slow = prev;
        
        
        while (head && slow) {
            fast = head->next;
            prev = slow->next;
            head->next = slow;
            slow->next = fast;///...
            head = fast;
            slow = prev;
        }
        
        
        if (head && head->next) head->next->next = NULL;
    }
        
    
};

// First let's take two pointers name it as half and temp . temp is faster than half by 1.
// When temp reaches the end of linkedlsit half reaches the middle element .So this is how the linkedlist will get divided in two halfes as the center will become a dividing node .
// Now reverse the second half .
// After reversing the second half, merge the first half and second half.