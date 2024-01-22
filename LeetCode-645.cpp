class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(int num : nums){
            umap[num]++;
        }
        int missing=0, duplicate=0;
        for(int i =1; i<=nums.size();i++){
            if(umap[i] > 1 ){
               duplicate=i;
            }
            if(umap[i] == 0){
               missing = i;
            }
        }
        return {duplicate, missing};
    }
};
