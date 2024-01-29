class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>> p_queue;
        vector<vector<int>> ans;

        for(int i = 0; i < points.size(); i++){
            
            p_queue.push({ (points[i][0]*points[i][0] +  points[i][1]*points[i][1]), points[i]});
            if(p_queue.size() > k){
                p_queue.pop();
            }
        }

        while(!p_queue.empty()){
            pair<int, vector<int>> p = p_queue.top();
            p_queue.pop();
            ans.push_back(p.second);
        }

        return ans;

    }
};
