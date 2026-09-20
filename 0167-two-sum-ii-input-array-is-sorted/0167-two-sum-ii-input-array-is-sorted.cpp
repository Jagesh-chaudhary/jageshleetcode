class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int start = 0;
        int end = nums.size()-1;
        int currSum = 0;
        vector<int> ans;

        while(start < end){
            currSum = nums[start] + nums[end];
            if(currSum == target) {
                ans.push_back(start+1);
                ans.push_back(end+1);
                return ans;
            } else if(currSum > target) {
                end--;
            } else {
                start++;
            }
        }
        return ans;

    }
};