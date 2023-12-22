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
    ListNode* removeElements(ListNode* head, int val) {

        ListNode* temp = head;
        ListNode* prev= NULL;
        while(temp != NULL){
            if(temp->val == val){
                if(prev == NULL){
                    head = temp->next;
                } else {
                    prev->next = temp->next;
                    //prev = temp->next;
                }

            } else {
                prev=temp;

            }

            temp = temp->next;
        }
        return head;
    }
};

// using recursive approach

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
    ListNode* removeElements(ListNode* head, int val) {

      if(head == NULL) return NULL;

      if(head->val == val) return removeElements(head->next, val);

      head ->next = removeElements(head->next, val);
      return head;
    }
};
