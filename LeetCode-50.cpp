class Solution {
public:
    double myPow(double x, long int n) {
        if(n<0){
            return 1.0/myPow(x,n*-1);
        }

        if(n==0){
            return 1.0;
        }
        if(n==1){
            return x;
        }
        if(n&1){
            return x*myPow(x,n-1);
        }

        double val = myPow(x,n/2);
        return val*val;

    }
};
