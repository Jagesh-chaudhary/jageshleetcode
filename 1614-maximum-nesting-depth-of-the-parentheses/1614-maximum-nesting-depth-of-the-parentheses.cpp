class Solution {
public:

    int solve(string &s, int i, int depth, int maxDepth) {

        // Base case
        if(i == s.length()) {
            return maxDepth;
        }

        // Opening bracket
        if(s[i] == '(') {
            depth++;
        }

        // Closing bracket
        if(s[i] == ')') {
            depth--;
        }

        // Maximum depth update
        maxDepth = max(maxDepth, depth);

        // Next character
        return solve(s, i + 1, depth, maxDepth);
    }

    int maxDepth(string s) {
        return solve(s, 0, 0, 0);
    }
};