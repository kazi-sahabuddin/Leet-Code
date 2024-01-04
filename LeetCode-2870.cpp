class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(int i=0;i< nums.size();i++){
            umap[nums[i]]++;
        }

        int ans =0;

        for(auto item: umap){
            cout<<item.first <<" "<<item.second<<endl;
            if(item.second < 2 ){
                return -1;
            }
            ans += ceil((double) item.second/3);
        }
        return ans;        
    }
};
