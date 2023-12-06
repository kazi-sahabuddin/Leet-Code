class Solution {
public:
    int totalMoney(int n) {
        int sum=0;
        for(int i=1;n>0;i++)
        { 
            
            for(int j=0;j<min(n,7);j++)
            {
                sum+=i+j;
            }
            n-=7;

        }
        return sum;
        
    }
};







/*class Solution {
public:
    int totalMoney(int n) {
        int sum=0;
        for(int i=1, x=n;i<=ceil((double)n/7.0);i++)
        { 
            int k = x>7?7:x;
            x-=7;
            for(int j=i;j<k+i;j++)
            {
                cout<<j<<" ";
                sum+=j;
            }
            cout<<endl;

        }
        return sum;
        
    }
};*/
