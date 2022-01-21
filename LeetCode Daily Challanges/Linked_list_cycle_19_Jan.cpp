// 142. Linked List Cycle II

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL||head->next==NULL)
            return NULL;
        ListNode* fast = head->next->next, *slow = head->next;
        while(fast!=NULL&&fast->next!=NULL&&fast!=slow)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        if(fast==slow)
        {
            if(slow == head)
                return head;
            int count =0;
            slow = head;
            while(slow->next!=fast->next)
            {
                count++;
                slow = slow->next;
                fast = fast->next;
            }
            return slow->next;
        }
        return NULL;
        
    }
};