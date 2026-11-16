class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        int n = nums2.size();
        stack<int> st;
        vector<int> res(n);

        int i = n-1;

        // NGR calculation
        while(i >= 0) {

            int currEle = nums2[i];

            while(!st.empty() && st.top() <= currEle) {
                st.pop();
            }

            if(st.empty()) {
                res[i] = -1;
            } 
            else {
                res[i] = st.top();
            }

            st.push(currEle);
            i--;
        }

        // nums1 ke according answer
        vector<int> ans;

        for(int j = 0; j < nums1.size(); j++) {

            for(int k = 0; k < nums2.size(); k++) {

                if(nums1[j] == nums2[k]) {
                    ans.push_back(res[k]);
                    break;
                }
            }
        }

        return ans;
    }
};

