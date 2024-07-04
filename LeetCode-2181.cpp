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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *h = NULL;
        ListNode *tmp;
        int x = 0;

        while(head != NULL){

            if(head->val != 0){
                x +=head->val;
            } else {
                if(x){
                    ListNode *node = new ListNode(x);
                    if(h == NULL){
                        h = node;
                        tmp = h;
                    }else{                        
                        tmp->next = node;
                        tmp = tmp->next;
                    }
                    
                }
                x=0;
            }
            head = head->next;
        }

        return h;
        
    }
};
