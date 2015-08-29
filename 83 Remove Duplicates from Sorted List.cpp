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
        while (p->next){
            while (p->val == p->next->val && p->next){
                if (p->next->next){
                    auto tmp = p->next;
                    p->next = p->next->next;
                    free(tmp);
                }
                else{
                    p->next = nullptr;
                    break;
                }
            }
            if (p->next){
                p=p->next;
            }
        }
        return head;
    }
};