class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        s="";
        vector<string> v;
        while (getline(ss, s, ' ')) {         
            v.push_back(s);
        }
        string ans="";
        for(string a: v){
            for(int i=0,j=a.size()-1; i <= j; i++, j--){
                swap(a[i],a[j]);
            }
            ans+=a+" ";
        }
        ans.pop_back();

        return ans;
    }
};
