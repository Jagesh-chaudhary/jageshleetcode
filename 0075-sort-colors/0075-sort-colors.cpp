class Solution {
public:
    void sortColors(vector<int>& nums) {
        int st = 0;
        int mid = 0;
        int end = nums.size()-1;

        if(st < mid){ // base case
            mid = st;
        }

        while(mid <= end) {
            if(nums[mid] == 0){
                swap(nums[st], nums[mid]);
                st++;
                mid++;
            } else if(nums[mid] == 2){
               swap(nums[end], nums[mid]);
                end--;
            } else {
                mid++;
            }
        }
        
    }
};