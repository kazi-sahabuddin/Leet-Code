//with DP

class Solution {
public:
    int fib(int n) {
        vector<int> memo(n+1,-1);
        
        int ans =fibo(n, memo);

        return ans;

        
    }

    int fibo(int n, vector<int> &memo) {
        if(memo[n] != -1)
            return memo[n];
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        
        int ans = fibo(n-1, memo) + fibo(n-2,memo);
        memo[n]=ans;
        return ans;
        
        
    }
};


// with out DP

class Solution {
public:
    int fib(int n) {
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        
        return fib(n-1) + fib(n-2);
        
    }
};
