class Solution {
public:
    bool judgeSquareSum(int c) {
        
        if(c==0 || c==1)
        return true;
        long a = 0;
        long b = sqrtl(c);
        while(a <= b){
            long sum = (a*a) + (b*b);
            if( sum == c) return true;
            if( sum > c){
                b--;
            }else{
                a++;
            }
        }
        return false;
        
    }
};
