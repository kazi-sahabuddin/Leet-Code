class Solution {
public:
    int minOperations(vector<string>& logs) {
        int step = 0;
        for(string x : logs){
            if(x == "./"){
                continue;
            } else if(x == "../"){
                if(step > 0) step--;
            } else {
                step++;
            }
        }
        return step;
    }
};
