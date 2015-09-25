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
    ListNode* swapPairs(ListNode* head) {
        auto p = head;
        if (!p || !p->next){
            return p;
        }
        auto trd = p->next->next;
        auto sec = p->next;
        sec->next = p;
        p->next = swapPairs(trd);
        return sec;
    }
};