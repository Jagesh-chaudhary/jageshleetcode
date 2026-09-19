class Solution {
public:
    bool isIsomorphic(string s, string t) {

        int a[256] = {};
        int b[256] = {};

        for(int i=0; i<s.size(); i++){
            if(a[s[i]] != b[t[i]]) {
                return false;
            }

            a[s[i]] = i+1;
            b[t[i]] = i+1;
        
        }
        return true;
        
    }
};