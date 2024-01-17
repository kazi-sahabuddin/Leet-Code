class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> acc;
        for(int i=0;i<arr.size();i++)
        {
            acc[arr[i]]++;
        }

        set<int> ans;

        map<int, int>::iterator it = acc.begin(); 
        while (it != acc.end())
        {
            ans.insert( it->second) ;
            ++it;
        }        
        return ans.size()==acc.size();
    }
};
