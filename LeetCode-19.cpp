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
        ListNode* temp = head;
        int cnt=0;
        while(temp != NULL){
            cnt++;
            temp = temp -> next;
        }
        cout<<cnt<<endl;
        n= cnt - n;
        n++;
        if(n==1)
        return head->next;
        //cout<< n;
        cout<<n<<endl<<endl;
        cnt =0;
        temp = head;
        ListNode * prev = head;
        while(temp != NULL){
            cnt++;
           if(cnt == n){
               prev->next = temp ->next;
               //delete(temp);
               break;
           }
           
            prev = temp;
            temp = temp -> next;
        }

        return head;

        
    }
};
