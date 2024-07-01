class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {        

        int cnt=0;

        for(int i = 0; i < 3 && arr.size() >= 3; i++){
            if(arr[i] & 1){
                cnt++;
            } else {
                cnt=0;
            }
            if(cnt == 3)
            return true;
        }

    

        for(int i = 3; i < arr.size(); i++){
            
            if(arr[i] & 1){
                cnt++;
            }else {
                cnt = 0;
            }

            if(cnt == 3)
            return true;

        }
       
        return false;
        
    }
};
