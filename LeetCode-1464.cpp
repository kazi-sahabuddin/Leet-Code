class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return (nums[nums.size()-1]-1)*(nums[nums.size()-2]-1);
        
    }
};

//Approach 3: Track Second Biggest
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int biggest = 0;
        int sndBiggest =0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>biggest){
                sndBiggest = biggest;
                biggest = nums[i];
            } else {
                sndBiggest = nums[i]>sndBiggest?nums[i]:sndBiggest;
            }
        }

        return (biggest-1)*(sndBiggest-1);
        
    }
};
