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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(slow != NULL && fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};




class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *team = head;
        int cnt=0;
        while(team != NULL){
            cnt++;
            team = team->next;
        }
        int mid = cnt/2;
         cnt=0;
        team = head;
        while(mid>cnt)
        {            
            cnt++;
            team=team->next;
        }
        head = team;
        return head;
    }
};
