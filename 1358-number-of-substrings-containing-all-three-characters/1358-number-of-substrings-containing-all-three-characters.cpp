class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();

        int count0=0;
        int count1=0;
        int count2=0;

        int j = 0;
        int ans = 0;

        for(int i=0; i<n; i++){
            if(s[i] == 'a'){
                count0++;
            } else if(s[i] == 'b'){
                count1++;
            } else {
                count2++;
            }

            while(count0 > 0 && count1>0 && count2>0){
                ans += (n-i);

                if(s[j] == 'a'){
                    count0--;
                } else if(s[j] == 'b'){
                    count1--;
                } else {
                    count2--;
                }
                j++;
            }

        }
        return ans;
        
    }
};