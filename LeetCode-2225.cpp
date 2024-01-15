class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int> losserMap;

        for(int i=0; i<matches.size(); i++){
            losserMap[matches[i][1]]++;
        }

        vector<vector<int>> ans(2);

        for(int i=0; i<matches.size(); i++){
            if(losserMap.find(matches[i][0]) == losserMap.end()){
                losserMap[matches[i][0]]=0;
            }           
        }

        for(auto i = losserMap.begin(); i != losserMap.end(); i++){
            if(i->second == 1){
                ans[1].push_back(i->first);
            }
            if(i->second == 0){
                ans[0].push_back(i->first);
            }
        }
        

        return ans;
        
    }
};
