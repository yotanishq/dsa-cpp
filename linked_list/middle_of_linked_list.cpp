// Find the middle of a singly linked list
// If there are two middle nodes, returns the second one
// Time: O(n), Space: O(1)

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* middleNode(ListNode* head) {
    ListNode* mid = head;
    ListNode* tail = head;

    while (tail != nullptr && tail->next != nullptr) {
        mid = mid->next;           // moves 1 step
        tail = tail->next->next;  // moves 2 steps
    }

    return mid;
}
