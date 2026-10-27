class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int st = 0;
        int sum = 0;
        int mini = INT_MAX;

        for(int end = 0; end < n; end++) {
            sum += nums[end];

            while(sum >= target) {
                mini = min(mini, end - st + 1);

                sum -= nums[st];
                st++;
            }
        }

        if(mini == INT_MAX) {
            return 0;
        }

        return mini;
    }
};
