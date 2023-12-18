class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        return (nums[nums.size()-1]*nums[nums.size()-2])-(nums[0]*nums[1]);
        
    }
};

//Approach 2: Track the Two Biggest and the Two Smallest Elements

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int biggest =0;
        int secondBiggest =0;
        int smallest = INT_MAX;
        int secondsmallest = INT_MAX;

        for(int num: nums){
            if(num>biggest){
                secondBiggest = biggest;
                biggest = num;
            } else {
                secondBiggest = (num>secondBiggest)?num:secondBiggest;
            }
            if(num<smallest)
            {
                secondsmallest = smallest;
                smallest = num;
            } else {
                secondsmallest = (secondsmallest > num)? num:secondsmallest;
            }
        }

        return (biggest * secondBiggest)-(smallest * secondsmallest);

        
    }
};
