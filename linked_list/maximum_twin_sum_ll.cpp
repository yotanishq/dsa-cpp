// Maximum Twin Sum of a Singly Linked List
// Time: O(n), Space: O(1)
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};
int max(int a,int b){
    if(a>b) return a;
    return b;
}
int pairSum(ListNode* head) {
    ListNode* mid = head;
    ListNode* tail = head;

    // Find middle
    while (tail != nullptr && tail->next != nullptr) {
        mid = mid->next;
        tail = tail->next->next;
    }

    // Reverse second half
    ListNode* prev = nullptr;
    while (mid != nullptr) {
        ListNode* temp = mid->next;
        mid->next = prev;
        prev = mid;
        mid = temp;
    }

    // Compute twin sum
    int twin_max = 0;
    tail = prev;
    while (tail != nullptr) {
        twin_max = max(twin_max, head->val + tail->val);
        head = head->next;
        tail = tail->next;
    }

    return twin_max;
}
