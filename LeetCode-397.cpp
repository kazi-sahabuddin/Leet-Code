class Solution {
public:
    int integerReplacement(long long n) {
        if(n==1)
            return 0;
        if(n%2==0)
            return 1 + integerReplacement(n/2);
        int opt1 = 1 + integerReplacement(n+1);
        int opt2 = 1 + integerReplacement(n-1);

        return min(opt1,opt2);
    }
};
