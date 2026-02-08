// LeetCode: Delete Node in a Singly Linked List
// Given only the node to be deleted (not the head)

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Optimal O(1) solution
void deleteNode(ListNode* node) {
    node->val = node->next->val;
    node->next = node->next->next;
}

/*
Explanation:
- We cannot access the previous node in a singly linked list.
- Instead of deleting the given node, we overwrite it with its next node.
- Then we bypass the next node.
Time: O(1)
Space: O(1)
*/
