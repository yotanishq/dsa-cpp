// Odd Even Linked List
// Groups nodes at odd indices first, then even indices
// Time: O(n), Space: O(1)

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* oddEvenList(ListNode* head) {
    if (head == nullptr) return head;

    ListNode* mover1 = head;        // odd list tail
    ListNode* mover2 = head->next;  // even list tail
    ListNode* head2  = head->next;  // even list head

    while (mover2 != nullptr && mover2->next != nullptr) {
        mover1->next = mover1->next->next;
        mover1 = mover1->next;

        mover2->next = mover2->next->next;
        mover2 = mover2->next;
    }

    mover1->next = head2;
    return head;
}
