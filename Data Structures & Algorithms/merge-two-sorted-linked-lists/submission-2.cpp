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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
          if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1; if(list2->val<list1->val)swap(list1,list2);
        ListNode *p1=list1;
        ListNode *p2=list2;
       
        while(p1!=nullptr && p2!= nullptr){
            if (p1->next == nullptr) {
                p1->next = p2;
                break;
            }
            if(p2->val<=p1->next->val){
              
               ListNode *temp2=p2;
               p2=p2->next;
                temp2->next=p1->next;
                p1->next=temp2;
                
            }
            else{
                p1=p1->next;
            }

        }

        return list1;
    }
};
