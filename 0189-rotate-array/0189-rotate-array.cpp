class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();
        k = k % n;
        reverse(nums.begin(), nums.end()); // sort whole array

        reverse(nums.begin(), nums.begin() + k); // First k elements reverse:

        reverse(nums.begin() + k, nums.end()); // remaing elements

        
    }
};