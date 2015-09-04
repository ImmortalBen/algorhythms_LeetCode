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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head){
            return nullptr;
        }
        auto p = head;
        auto tail = head;
        while (p = p->next){
            if (p->val != tail->val){
                tail = tail->next;
                tail->val = p->val;
            }
        }
        p = tail->next;
        tail->next = nullptr;
        while (p){
            auto tmp = p->next;
            free(p);
            p = tmp;
        }
        return head;
    }
};