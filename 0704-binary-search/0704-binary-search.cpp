// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int start = 0;
//         int end = nums.size() - 1;

//         while(start <= end) {
//             int mid = (start + end) / 2;

//             if(nums[mid] == target) {
//                 return mid;
//             }
//             else if(nums[mid] < target) {
//                 start = mid + 1;
//             }
//             else {
//                 end = mid - 1;
//             }
//         }

//         return -1;
//     }
// };



class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size()-1;

        while(st <= end){
            int mid = st+(end-st)/2;

            if(nums[mid] == target){
                return mid;
            } else if (nums[mid] <target) {
                st =mid+1;
            } else{
                end =mid-1;
            }
        }
        return -1;
        
    }
};
