class Solution {
public:

    int firstOcc(vector<int>& nums, int target){
        int ans = -1;
        int st = 0;
        int end = nums.size()-1;

        while(st <= end){
            int mid = st + (end-st)/2;
            if(target == nums[mid]){
                ans = mid;
                end = mid - 1;
            } else if(target > nums[mid]){
                st = mid+1;
            } else {
                end = mid-1;
            }
        } 

      return ans;
    }

    int lastOcc(vector<int>& nums, int target){
        int ans = -1;
        int st = 0;
        int end = nums.size()-1;

        while(st <= end){
            int mid = st+(end-st)/2;

            if(target == nums[mid]){
                ans = mid;
                st = mid+1;
            } else if(target > nums[mid]){
                st = mid+1;
            } else{
                end = mid-1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
       
       int first = firstOcc(nums, target);
       int last = lastOcc(nums, target);

       return { first, last };
              
    }
};