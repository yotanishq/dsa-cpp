// Add Two Numbers
// Digits are stored in reverse order
// Time: O(n), Space: O(1)

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* dummy = new ListNode(0);  // dummy head to simplify list building
    ListNode* tail = dummy;             // always points to last node in result
    int carry = 0;

    // Continue while at least one list has digits or carry remains
    while (l1 || l2 || carry) {

        // Treat missing nodes as 0 (for unequal lengths)
        int val1 = l1 ? l1->val : 0;
        int val2 = l2 ? l2->val : 0;

        // Add current digits and carry
        int sum = val1 + val2 + carry;

        // Update carry for next iteration
        carry = sum / 10;

        // Create node for current digit
        tail->next = new ListNode(sum % 10);
        tail = tail->next;  // advance result tail

        // Move input pointers if available
        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
    }

    return dummy->next;  // skip dummy node
}
