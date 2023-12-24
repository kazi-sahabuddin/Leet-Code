// recursive approch
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1)
            return false;
        if(n==1)
            return true;
        if(n&1)
            return false;
        return isPowerOfTwo(n/2);
        
    }
};

// Bit

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return false;
        if((n & (n-1))!=0)
            return false;
        else
            return true;
    }
};
