// Detect cycle in a singly linked list
// Floyd's Tortoise and Hare algorithm
// Time: O(n), Space: O(1)

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

bool hasCycle(ListNode* head) {
    ListNode* slower = head;
    ListNode* faster = head;

    while (faster != nullptr && faster->next != nullptr) {
        slower = slower->next;
        faster = faster->next->next;
        if (slower == faster)
            return true;
    }
    return false;
}
