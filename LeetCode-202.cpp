class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> umap;
        while(true){
            umap[n]++;

            if(umap[n]>1)
                return false;
            int m=n;
            n=0;
            while(m>0)
            {
                int x = m%10;
                m/=10;
                n+=x*x;
                
            }
            if(n==1)
                return true;

        }
    }
};

//recursive approch

class Solution {
public:
    int sqrSum(int m){
        int sum=0;
        while(m>0)
        {
            int x = m%10;
            m/=10;
            sum+=x*x;        
        }
        return sum;
    }
    unordered_set<int> seen;
    bool isHappy(int n) { 
        if(seen.find(n) != seen.end())
            return false;
        seen.insert(n);
        n=sqrSum(n);
        if(n==1) {
            return true;
        }
        return isHappy(n); 
    }
};
