/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* p = head, *pre = nullptr;
        while(p!=nullptr){
            ListNode* next = p->next;
            p->next = pre;
            pre = p;
            p = next; 
        }
        return pre;
    }
};