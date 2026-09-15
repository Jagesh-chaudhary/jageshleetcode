class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int start = 0;
        int end = arr.size();

        while(start < end) {
            int mid = start + (end - start) / 2;
            int missingNumber = arr[mid] - (mid + 1);

            if(missingNumber < k){
                start = mid + 1;
            } else {
                end = mid;
            }
        }
        return start + k;


    }
};