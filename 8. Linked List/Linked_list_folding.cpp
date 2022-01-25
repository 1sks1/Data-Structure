/*
Linked List Folding:

You are given a singly linked list node containing integer values.
Take the first half of the linked list 
and fold over the second half and merge the intersecting nodes by taking their sum.
*/

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */

// Good One:

// Method 1.
// It uses a stack to store the first half of LL.
// when popped it gives nodes in reverse order
// keep in mind the difference in even and odd number of nodes point cases.
// time complexity: O(n) and Aux space: O(n)
LLNode* solve(LLNode* node) {
    if(node == NULL || node->next == NULL)
        return node;
    LLNode* fast = node,*slow = node;
    stack<LLNode*> s;
    while(fast != NULL && fast-> next != NULL)
    {
        s.push(slow);
        fast = fast->next->next;
        slow = slow-> next;
    }
    LLNode *head = slow;
    if(fast != NULL)
    {
        slow = slow->next;
    }
    LLNode *curr;
    while(slow != NULL)
    {
        curr = s.top();
        s.pop();
        slow->val += curr->val;
        slow = slow->next;
    }
    return head;
}

// Method 2
// It reverse the first half of LL and adds the two linked list element wise.
// keep in mind the difference in even and odd number of nodes point cases.
// time complexity: O(n) and Aux space: O(1)

// function to reverse a Link list from head till given node
 LLNode* reverse(LLNode* node,LLNode* end)
 {
    LLNode* prev = NULL;
    LLNode* next;
    while(node != end)
    {
        next = node->next;
        node->next = prev;
        prev = node;
        node = next;
    }
    return prev; // prev is head of the reversed linked list.
 }

LLNode* solve(LLNode* node) {
    if(node == NULL || node->next == NULL)
        return node;
    LLNode* fast = node,*slow = node;
    while(fast != NULL && fast-> next != NULL)
    {
        fast = fast->next->next;
        slow = slow-> next;
    }
    LLNode *head = reverse(node,slow);
    LLNode *curr = head; 
    if(fast != NULL)
    {
        slow = slow->next;
    }
    while(slow != NULL)
    {
        slow->val += curr->val;
        curr = curr->next;
        slow = slow->next;
    }
    return head;
}
//