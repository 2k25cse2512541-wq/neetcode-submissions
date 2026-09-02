class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        if(l1==nullptr) return l2;
        if(l2==nullptr) return l1;

        int carry = 0;
        ListNode* prev = nullptr;

        while(temp1!=nullptr && temp2!=nullptr){
            int sum = temp1->val + temp2->val + carry;
            temp1->val = sum % 10;
            carry = sum / 10;

            prev = temp1;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        // if l2 is longer
        if(temp1==nullptr && temp2!=nullptr){
            prev->next = temp2;
            temp1 = prev->next;

            while(temp1!=nullptr){
                int sum = temp1->val + carry;
                temp1->val = sum % 10;
                carry = sum / 10;

                prev = temp1;
                temp1 = temp1->next;
            }
        }

        
        while(temp1!=nullptr){
            int sum = temp1->val + carry;
            temp1->val = sum % 10;
            carry = sum / 10;

            prev = temp1;
            temp1 = temp1->next;
        }

        
        if(carry){
            prev->next = new ListNode(carry);
        }

        return l1;
    }
};