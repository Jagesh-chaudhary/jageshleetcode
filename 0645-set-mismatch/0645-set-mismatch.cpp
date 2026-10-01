class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        int missingNum = -1;
        int duplicate = -1;

        for(int i=0; i<nums.size(); i++) {
            int currEle = abs(nums[i]);

            if(nums[currEle - 1] < 0){
                duplicate = currEle;
            }  else  {
               nums[currEle - 1] = nums[currEle -1]* -1;
            }
        }

        for(int i=0; i<nums.size(); i++) {
            if(nums[i] > 0){
                missingNum = i+1;
            }
        }

        return { duplicate, missingNum };
    }
};