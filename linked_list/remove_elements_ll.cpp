// Remove elements from a singly linked list
// Removes all nodes with value == val
// Time: O(n), Space: O(1)

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* removeElements(ListNode* head, int val) {
    ListNode* mover = head;
    ListNode* prev = nullptr;

    while (mover != nullptr) {
        if (mover->val == val) {
            if (mover == head) {
                head = head->next;
                mover = head;
            } else {
                prev->next = mover->next;
                mover = prev->next;
            }
        } else {
            prev = mover;
            mover = mover->next;
        }
    }
    return head;
}
