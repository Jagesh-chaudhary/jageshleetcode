class Solution {
public:
    bool isPerfectSquare(int num) {

        long long st = 1;
        long long end = num;

        if(num == 1){
            return true;;
        }

        while(st <= end) {
            long long mid = st + (end - st)/2;

            if(mid*mid == num){
                return true;
            } else if (mid*mid < num){
                st = mid+1;
            } else {
                end = mid-1;
            }
        }
        return false;
        
    }
};