class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int cnt = 0;
        while(left != right){
            left >>= 1;
            right >>= 1;
            cnt++;
            cout<<left<<" "<<right<<endl;
        }

        return (left << cnt);
    }
};
