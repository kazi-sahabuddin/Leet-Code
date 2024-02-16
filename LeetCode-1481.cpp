class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
       
        unordered_map<int, int> ump;
        for(int a : arr){
            ump[a]++;
        }
        vector<int> freq;
        for(auto x : ump){
           
            freq.push_back(x.second);            
        }
        sort(freq.begin(), freq.end());
        int cnt=0;
        for(int i = 0; i < freq.size(); i++){
            cnt +=freq[i];

            if(cnt> k){
                return freq.size() - i;
            }
        }

        return 0;

    }
};
