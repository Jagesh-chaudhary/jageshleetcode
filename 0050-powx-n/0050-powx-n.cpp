class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long long power = n;

        if(power < 0) {
            power = -power;
        }

        while(power > 0) {
            int lastBit = power & 1;

            if(lastBit) {
                ans = ans * x;
            }

            x = x * x;
            power = power >> 1;
        }

        if(n < 0) {
            return 1 / ans;
        }

        return ans;
    }
};