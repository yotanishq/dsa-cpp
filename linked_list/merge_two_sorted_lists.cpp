// Merge Two Sorted Lists
// Time: O(n + m), Space: O(1)

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* mover1 = list1;
    ListNode* mover2 = list2;

    if (mover1 == nullptr) return mover2;
    if (mover2 == nullptr) return mover1;

    ListNode* ans;
    ListNode* prev = nullptr;

    if (mover1->val <= mover2->val)
        ans = mover1;
    else
        ans = mover2;

    while (mover1 != nullptr && mover2 != nullptr) {
        if (prev == nullptr) {
            if (mover1->val <= mover2->val) {
                prev = mover1;
                mover1 = mover1->next;
            } else {
                prev = mover2;
                mover2 = mover2->next;
            }
        }
        else if (mover1->val <= mover2->val) {
            ListNode* temp = mover1;
            mover1 = mover1->next;
            prev->next = temp;
            prev = temp;
        }
        else {
            ListNode* temp = mover2;
            mover2 = mover2->next;
            prev->next = temp;
            prev = temp;
        }
    }

    if (mover1 == nullptr)
        prev->next = mover2;
    else
        prev->next = mover1;

    return ans;
}
