/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr)return nullptr;
        
        ListNode* forward=head;
        ListNode* back=head;int i=0;
        while(forward!=nullptr&&i<n){
            i++;
            forward=forward->next;
        }
        if(forward==nullptr){return head->next;}
        while(forward->next!=nullptr){
            back=back->next;
            forward=forward->next;
        }
        back->next=back->next->next;
        return head;
    }
};