class Solution {
public:
    int trap(vector<int>& heights) {
        int n = heights.size();

        int leftMax[20000], rightMax[20000];

        leftMax[0] = heights[0];
        rightMax[n - 1] = heights[n - 1];

        // Left maximum
        for(int i = 1; i < n; i++) {
            leftMax[i] = max(leftMax[i - 1], heights[i - 1]);
        }

        // Right maximum
        for(int i = n - 2; i >= 0; i--) {
            rightMax[i] = max(rightMax[i + 1], heights[i + 1]);
        }

        int waterTrapped = 0;

        for(int i = 0; i < n; i++) {
            int currWater = min(leftMax[i], rightMax[i]) - heights[i];

            if(currWater > 0) {
                waterTrapped += currWater;
            }
        }

        return waterTrapped;
    }
};