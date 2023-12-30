class Solution {
public:
    bool makeEqual(vector<string>& words) {
        vector<int> v(27,0);
        int n = words.size();
        for(int i =0; i< n; i++){
            for(int j = 0 ;j<words[i].size();j++){
                v[words[i][j]-'a'] ++;
            }
        }
        for(int i=0;i<27;i++)
        {
            if(v[i]%n != 0)
            {
                return false;
            }
        }

        return true;
        
    }
};
