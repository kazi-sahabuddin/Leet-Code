class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a = m-1, b = n -1, c = m+n-1;        
        while(b >= 0) {
            if(a >= 0 && nums1[a] > nums2[b] ){
                nums1[c--] = nums1[a--];
            } else {
                nums1[c--] = nums2[b--];
            }
        }       
        
    }
};

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        vector<int> v;
        while(i < m && j < n){
            if(nums1[i] < nums2[j]){
                v.push_back(nums1[i]);
                i++;
            } else {
                v.push_back(nums2[j]);
                j++;
            }
        }

        while(i< m){
            v.push_back(nums1[i]);
            i++;
        }

        while( j < n){
            v.push_back(nums2[j]);
            j++;
        }
        
        for(int k = 0; k < m+n; k++){
            nums1[k] = v[k];
        }
    }
};
