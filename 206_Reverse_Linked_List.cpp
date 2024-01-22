class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *pre = new ListNode(0), *cur = head;
        pre -> next = head;
        while (cur && cur -> next) {
            ListNode* temp = pre -> next;
            pre -> next = cur -> next;
            cur -> next = cur -> next -> next;
            pre -> next -> next = temp;
        }
        return pre -> next;
    }
};
