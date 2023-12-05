class Solution {
public:
    int numberOfMatches(int n) {
        int total=0;
        while(n>1){
            if(n&1)
            {
                n--;
                n/=2;
                total+=n;
                n++;
            }
            else{
                n/=2;
                total+=n;
            }
        }

        return total;
        
    }
};
