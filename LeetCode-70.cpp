class Solution {
public:
    int climbStairs(int n) {

         vector<int> memo(n+1,-1);
        
        int ans =fibo(n, memo);

        return ans;
        
    }

    int fibo(int n, vector<int> &memo) {
        if(memo[n] != -1)
            return memo[n];

        if(n==1 || n==0)
            return 1;
        
        int ans = fibo(n-1, memo) + fibo(n-2,memo);
        memo[n]=ans;
        return ans;
        
        
    }
};


//


class Solution {
public:
    int climbStairs(int n) {
        if(n<=2)
            return n;        

        vector<int> memo(n+1);
        memo[0] =1;
        memo[1] =1;
        memo[2] =2;
        
        for(int i =3;i<=n;i++)
        {
            memo[i]=memo[i-1]+memo[i-2];
        }

        return memo[n];
        
    }

   
};


