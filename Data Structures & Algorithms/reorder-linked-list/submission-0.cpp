class Solution {
public:
    void reorderList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return;


        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* second = slow->next;
        slow->next = nullptr;

        ListNode* prev = nullptr;
        ListNode* curr = second;

        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        ListNode* temp1 = head;
        ListNode* temp2 = prev;

        while (temp2 != nullptr) {
            ListNode* holder = temp1->next;
            ListNode* holder2 = temp2->next;

            temp1->next = temp2;
            temp2->next = holder;

            temp1 = holder;
            temp2 = holder2;
        }
    }
};