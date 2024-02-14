class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        for(int num : nums){
            if(num > -1){
                pos.push_back(num);
            } else {

                neg.push_back(num);
            }
        }
        vector<int> ans;
        for(int i =0; i<pos.size();i++){
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }
        return ans;        
    }
};

//Approach: Two Pointers

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        int pos=0,neg=1;
        for(int i =0; i<n;i++){
            if(nums[i] > -1){
                ans[pos] = nums[i];
                pos+=2;
            } else {
                ans[neg] = nums[i];
                neg+=2;
            }
        }
        return ans;        
    }
};
