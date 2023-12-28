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
    int getDecimalValue(ListNode* head) {

        int ans=0;
        while(head != NULL)
        {
            ans+=head->val;
            head = head->next;
            if(head != NULL)
            {
                ans*=2;
            }
        }

        return ans;
        
    }
};

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int> v;
        while(head != NULL){
            v.push_back(head->val);
        head = head->next;
        }

        int ans=0;

        for(int i= v.size()-1, j=0;i>=0;i--,j++){
           
            ans+= v[i]*pow(2,j);
  
        }

        return ans;
        
        
    }
};
