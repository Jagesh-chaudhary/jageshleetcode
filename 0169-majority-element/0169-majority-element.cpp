class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int count = 0;
        int curr = 0;

        for(int i=0; i<nums.size(); i++){
            if(count == 0){
                curr = nums[i];
            }

            if(nums[i] == curr){
                count++;
            } else {
                count--;
            }
        }
        return curr;
    }
};