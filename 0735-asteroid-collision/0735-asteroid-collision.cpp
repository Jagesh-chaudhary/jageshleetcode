class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for(int i=0; i<asteroids.size(); i++) {
            int asteroid = asteroids[i];
            bool destroy = false;

            while(!st.empty() && st.top() > 0 && asteroid < 0){
                if(abs(st.top()) > abs(asteroid)){
                    destroy = true;
                    break;
                } else if(abs(st.top()) == abs(asteroid)){
                    st.pop();
                    destroy = true;
                    break;
                } else {
                    st.pop();
                }
            }

            if(!destroy){
                st.push(asteroid);
            }
        }

        vector<int> ans;

        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        } 
        reverse(ans.begin(), ans.end());

        return ans;
    }
};