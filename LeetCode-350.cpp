class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int> umap;
        vector<int> result;
        for(int x:nums1){
            umap[x]++;
        }

        for(int x:nums2){
            if(umap[x]>0){
                result.push_back(x);
                umap[x]--;
            }
        }
        return result;
        
    }
};
