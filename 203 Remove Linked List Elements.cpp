class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head==NULL){
            return head;
        }
        ListNode* p=head;
        while(p->next!=NULL){
            if (p->next->val == val){
                auto freeNode = p->next;
                p->next = p->next->next;
                free(freeNode);
            }
            else{
                p=p->next;
            }
        }
        if (head->val==val)
            head=head->next;
        return head;
    }
};