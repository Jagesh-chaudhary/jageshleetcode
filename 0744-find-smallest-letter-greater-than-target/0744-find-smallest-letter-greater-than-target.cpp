class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int st = 0;
        int end = letters.size()-1;
        int ans = -1;

        while(st <= end){
            int mid = st+(end-st)/2;

            if (target < letters[mid]){
                ans = mid;
                end = mid-1;
            } else {
                st = mid+1;
            }

        }

        if(ans == -1){
            return letters[0];
        }

        return letters[ans];
    }
};